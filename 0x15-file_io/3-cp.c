#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <string.h>

#define BUFFER_SIZE 1024

/**
 * main - Entry point for the program
 * @argc: no of arguments passed to the program (including the name of the
 * program)
 * @argv: the commandline arguments
 * Return: 0 for sucess, not 0 otherwise
 */

int main(int argc, char *argv[])
{
	ssize_t bytes_read, bytes_written;
	char err_msg[100], *err_msg2, *buffer, *usage_msg;
	const char *file_from = argv[1];
	const char *file_to = argv[2];
	int fd_from, fd_to;

	if (argc != 3)
	{
		usage_msg = "Usage: cp file_from file_to\n";
		write(STDERR_FILENO, usage_msg, strlen(usage_msg));
		return (97);
    }

    /* Open source file for reading*/
    fd_from = open(file_from, O_RDONLY);
    if (fd_from == -1) {
        strcat(err_msg, "\n");
        write(STDERR_FILENO, err_msg, strlen(err_msg));
        return (98);
    }

    /* Open destination file for writing or create it if it doesn't exist*/
    fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 664);
    if (fd_to == -1) {
        strcpy(err_msg, "Error: Can't write to ");
        strcat(err_msg, file_to);
        strcat(err_msg, "\n");
        write(STDERR_FILENO, err_msg, strlen(err_msg));
        close(fd_from);
        return (99);
    }

    buffer = malloc(BUFFER_SIZE);

    while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0) {
        bytes_written = write(fd_to, buffer, bytes_read);
        if (bytes_written != bytes_read) {
            strcpy(err_msg, "Error: Write to file ");
            strcat(err_msg, file_to);
            strcat(err_msg, " failed\n");
            write(STDERR_FILENO, err_msg, strlen(err_msg));
            close(fd_from);
            close(fd_to);
            free(buffer);
            return (99);
        }
    }

    if (bytes_read == -1) {
        strcpy(err_msg, "Error: Read from file ");
        strcat(err_msg, file_from);
        strcat(err_msg, " failed\n");
        write(STDERR_FILENO, err_msg, strlen(err_msg));
        close(fd_from);
        close(fd_to);
        free(buffer);
        return (98);
    }

	chmod(file_to, 0664);

    /* Close file descriptors */
    if (close(fd_from) == -1 || close(fd_to) == -1) {
        err_msg2 = "Error: Can't close fd\n";
        write(STDERR_FILENO, err_msg2, strlen(err_msg2));
        free(buffer);
        return (100);
    }

    free(buffer);
    exit(0);
}
