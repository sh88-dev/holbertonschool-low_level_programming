#include "dog.h"
#include <stdlib.h>

/**
 * str_len - counts the characters in a string
 * @s: the string to measure
 *
 * Return: the number of characters before the '\0'
 */
int str_len(char *s)
{
	int len;

	len = 0;
	while (s[len] != '\0')
		len++;
	return (len);
}

/**
 * copy_string - makes a newly allocated copy of a string
 * @s: the string to copy
 *
 * Return: a pointer to the copy, or NULL if s is NULL or malloc fails
 */
char *copy_string(char *s)
{
	char *copy;
	int len;
	int i;

	if (s == NULL)
		return (NULL);
	len = str_len(s);
	copy = malloc(sizeof(char) * (len + 1));
	if (copy == NULL)
		return (NULL);
	i = 0;
	while (i <= len)
	{
		copy[i] = s[i];
		i++;
	}
	return (copy);
}

/**
 * new_dog - creates a new dog
 * @name: the dog's name (a copy is stored)
 * @age: the dog's age
 * @owner: the owner's name (a copy is stored)
 *
 * Return: a pointer to the new dog, or NULL if the function fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);
	d->name = copy_string(name);
	if (name != NULL && d->name == NULL)
	{
		free(d);
		return (NULL);
	}
	d->owner = copy_string(owner);
	if (owner != NULL && d->owner == NULL)
	{
		free(d->name);
		free(d);
		return (NULL);
	}
	d->age = age;
	return (d);
}
