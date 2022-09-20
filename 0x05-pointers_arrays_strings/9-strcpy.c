#include <stdio.h>
#include "main.h"

/**
* _strcpy - This function copies a string
* pointed to src including the terminating
* null byte (\0), to the buffer pointed to by dest.
* @dest: parameter for the function
* @src: parameter for the function
* Return: char
*/

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; *(src + i) != '\0'; i++)
	{
		dest[i] = *(src + i);
	}
	dest[i] = '\0';

	return (dest);
}
