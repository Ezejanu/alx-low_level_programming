#ifndef DOG_H
#define DOG_H

/**
* struct dog - a new type struct dog with the following elements
* @name: name of dog
* @age: age of the dog
* @owner: owner of the dog
*/

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
* dog_t - a new type dog_t as a new name for the type struct dog
* i.e typedef for struct dog
*/

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
