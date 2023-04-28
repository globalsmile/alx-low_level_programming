#include <stdio.h>

void first(void) __attribute__ ((constructor));

/**
  * first - Print statement within this func before running main func.
  *
  * Return: Nothing.
  */
void first(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
