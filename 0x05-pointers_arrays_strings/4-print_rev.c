#include "main.h"
/**
* print_rev - func that prints a string, in reverse
* @s: declaration of s and the parameter for the function
* Return: Always 0.
*/
void print_rev(char *s)
{
	int c;

	for (c = 0; s[c] != 0; c++)
	{
	}
	for (c = c - 1; c >= 0; c--)
		_putchar(s[c]);
	_putchar('\n');

}
