#include<stdio.h>
#include<dog.h>

/**
 * print_dog - function that prints a struct dog
 * @d: the struct
 *
 * Return: nothing
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (d->name == NULL)
		printf("Name: %s\n", (nil));
	else
		printf("Name: %s\n", d->name);

	if (d->age == NULL)
		printf("Age: %s\n", (nil));
	else
		printf("Age: %s\n", d->age);

	if (d->owner == NULL)
		printf("Owner: %s\n", (nil));
	else
		printf("Owner: %s\n", d->owner);
}
