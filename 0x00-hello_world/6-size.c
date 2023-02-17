#include <stdio.h>
/**
 *  main - A programme that prints the size of various computer types
 *  Return 0 (success)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

      printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(a));
      printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(b));
