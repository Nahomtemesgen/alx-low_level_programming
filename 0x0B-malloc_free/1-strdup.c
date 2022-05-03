#include "holberton.h"
/**
 * _strlen - returns the length of a string
 * @s: get a pointer
 * Return: return the string
 */
int _strlen(char *s)
{
	int largo = 0;

	while (*s != '\0')
	{
		largo++;
		s++;
	}
	return (largo);
}
/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter
 * @str: get a string
 * Return: return a pointer or return NULL if fail
 */
char *_strdup(char *str)
{
	unsigned int i, len;
	char *output;

	if (str == NULL)
	{
		return (NULL);
	}
	len = _strlen(str);
	output = malloc(sizeof(char) * (len + 1));
	if (output == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i]; i++)
	{
		output[i] = str[i];
	}
	return (output);
}
