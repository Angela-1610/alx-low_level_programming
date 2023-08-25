#include <stdio.h>

void function(void) __attribute__ ((constructor));

/**
 * function - prints a sentence before the main
 * function is executed
 */
void function(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
