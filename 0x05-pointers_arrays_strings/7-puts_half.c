#include "main.h"
#include <string.h>
/**
 * puts_half - puts_half print half of string
 * @str: parameter of the function
 * Return: Always 0
 */
void puts_half(char *str)
{
int n, i;
n = strlen(str);

if (n % 2 == 0)
{
i = (n / 2);
while (i < n)
{
_putchar(str[i]);
i = i + 1;
}
}
else
{
i = ((n - 1) / 2) + 1;
while (i < n)
{
_putchar(str[i]);
i = i + 1;
}
}
_putchar('\n');
}
