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
 * _strcpy - copies the string pointed to
 * by src, including the terminating null
 * byte (\0), to the buffer pointed to by dest
 * @dest: get a array
 * @src: get a array
 * Return: return dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
		i++;
	}
	*dest = '\0';
	dest = dest - i;
	return (dest);
}
/**
 * length - count length of a string
 * @dest: get a string
 * Return: return the count
 */

int length(char *dest)
{
	return ((*dest != '\0') ? 1 + length(dest + 1) : 0);

}
/**
 * _strcat - concatenates two strings
 * @dest: get a pointer
 * @src: get a pointer
 * Return: return dest
 */
char *_strcat(char *dest, char *src)
{
	char *iterdest;

	iterdest = dest + length(dest);

	while (*src != '\0')
	{
		*iterdest = *src;
		src++;
		iterdest++;

	}
	*iterdest = *src;
	return (dest);
}
/**
 * str_concat - concatenates two strings
 * @s1: get a string
 * @s2: get a string
 * Return: return the string or NULL if fail
 */
char *str_concat(char *s1, char *s2)
{
	int len1, len2;
	char *output;

	/* volver strings vacios a los strings si son nulos */
	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	/* contar espacios del string salida y crearlo */
	len1 = _strlen(s1);
	len2 = _strlen(s2);
	output = malloc(sizeof(char) * ((len1 + 1) + (len2)));
	/* escribir las cadenas en el string salida */
	/* strcpy copia el string s1 en output */
	if (output == NULL)
	{
		return (NULL);
	}
	else
	{
		output = _strcpy(output, s1);
		/* strcat une lo copiado en output con s2 */
		output = _strcat(output, s2);
		return (output);
	}

}
