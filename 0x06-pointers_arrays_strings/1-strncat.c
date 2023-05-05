#include "main.h"

/**
 * _strncat - function that concatenates two strings
 *description: is a function taht concatenates two strings
 *@dest: destination string poinetr
 *@src: source string pointer
 *return: pointer to destination string
 */
char *_strncat(char *dest, char *src)
{
	int length_of_string, z;

	length_of_string = 0;

	while (dest[length_of_string] != '\0')
	{
		length_of_the_string++;
	}
	for (z = 0; z < n && src[z] != '\0'; z++, length_of_string++)
	{
		dest[length_of_string] = src[z];
	}
	dest[length_of_string] = '\0';
	return (dest);
}


