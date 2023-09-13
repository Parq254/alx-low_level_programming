#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints the struct dog
 * @d: struct dog
 * Return: void
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (!((*d).name))
		printf("Name: (nil)\n");
	else
		printf("Name: %s\n", (*d).name);
	if (!((*d).age))
		printf("Age: (nil)\n");
	else
		printf("Age: %f\n", (*d).age);
	if (!((*d).owner))
		printf("Owner: (nil)\n");
	else
		printf("Name: %s\n", (*d).owner);
}
