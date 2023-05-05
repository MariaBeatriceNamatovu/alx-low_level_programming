#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

#ifndef MAIN_H
#define MAIN_H

/**
 * file: main.h
 * auth: maria
 * description: header file having prototypes
 */
char *_strcat(char *dest, char *src);
char *_strncpy(char *dest, char *src, int n);
char *_strncat(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
void reverse_array(int *a, int n);
char *string_toupper(char *);
char *cap_string(char *);

#endif
