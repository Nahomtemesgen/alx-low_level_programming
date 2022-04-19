#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * puts2 - function that print the character of a string
 * @str: parameter accept character
 * Return: Always 0
 */
void puts2(char *str)
{
int n, i = 0;
n = strlen(str);
while (i < n)
{
_putchar(str[i]);
i = i + 2;
}
_putchar('\n');
}
