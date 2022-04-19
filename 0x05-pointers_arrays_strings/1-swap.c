#include "main.h"
/**
 * swap_int - to swap to values
 * @a: integer a
 * @b: ineger b
 * Return: Always 0
 */
void swap_int(int *a, int *b)
{
int temp;
temp = *a;
*a = *b;
*b = temp;
}
