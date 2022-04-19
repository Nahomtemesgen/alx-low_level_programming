#include "main.h"
/**
 * _isdigit - check if the number is integer
 * @c: parameter that was accepted as number
 * Return: Always 0 (Success)
 */
int _isdigit(int c)
{
if (c >= 48 && c <= 57)
{
return (1);
}
else
{
return (0);
}
}
