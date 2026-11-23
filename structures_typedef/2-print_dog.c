#include "dog.h"
#include <stdio.h>

/**
 * print_field - prints a labelled string, or (nil) if it is NULL
 * @label: the label to print before the value
 * @value: the string to print
 */
void print_field(char *label, char *value)
{
	if (value == NULL)
		printf("%s: (nil)\n", label);
	else
		printf("%s: %s\n", label, value);
}

/**
 * print_dog - prints a struct dog
 * @d: a pointer to the struct dog to print
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	print_field("Name", d->name);
	printf("Age: %f\n", d->age);
	print_field("Owner", d->owner);
}
