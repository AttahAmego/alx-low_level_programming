#include "main.h"
/**
* print_line - function that draws
* a straight line in the terminal.
* @n: is the integer for the paramaters of function
* Return: 0
*/
void print_line(int n)
{
	int a = 1;

	while (a <= n)
	{
		_putchar(95);
		a++;
	}
	 _putchar('\n');
}
