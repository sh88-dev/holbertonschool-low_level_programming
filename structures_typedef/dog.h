#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a dog's basic information
 * @name: the dog's name
 * @age: the dog's age
 * @owner: the name of the dog's owner
 *
 * Description: groups together the details that describe one dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

#endif
