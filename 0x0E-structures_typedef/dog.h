#ifndef DOG_H
#define DOG_H

/*
 * File: dog.h
 * Desc: header file that describes a new type struct dog
 */

/**
 * struct dog - a new type describing a dog
 * @name: name of the dog
 * @owner: owner of dog
 * @age: ago of dog
 */
struct dog
{
	char *name
	float age:
	char *owner;
};

/**
 * dog_t - Typedef for struct dog
 */

typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif

