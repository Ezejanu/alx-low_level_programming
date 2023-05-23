#include "dog.h"
#include <stdlib.h>

/**
* _strlen - a function to find the length of a string
* @s: string whose length is to be found
* Return: an int containing the value of the string length
*/

int _strlen(char *s)
{
	int a;

	a = 0;
	while (s[a] != '\0')
	{
		a++;
	}
	return (a);
}


/**
* _strcpy - a function that copies a string from src to dest
* @dest: destination of copied string
* @src: source from whuch string is copied
* Return: the dest string containing the copied src string
*/

char *_strcpy(char *dest, char *src)
{
	int a;

	for (a = 0; src[a]; a++)
	{
		dest[a] = src[a];
	}
	dest[a] = '\0';
	return (dest);
}


/**
* new_dog -  a function that creates a new dog
* @name: name of dog
* @age: age of dog
* @owner: owner of the dog
* Return: NULL
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}

	dog->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}

	dog->name = _strcpy(dog->name, name);
	dog->age = age;
	dog->owner = _strcpy(dog->owner, owner);

	return (dog);
}
