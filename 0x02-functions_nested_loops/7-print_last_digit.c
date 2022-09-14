#include "main.h"
/**
* print_last_digit - function that prints
* the last digits of any number
* @a: is the int that will be used for
* the argument of this function
* Return: returns the last digit
*/
int print_last_digit(int a)
{
	if (a >= 0 && a <= 9)
		return (a);

	else
	{
		a = _abs(a % 10);
		return (a);
	}
}
