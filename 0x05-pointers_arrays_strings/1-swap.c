#include "main.h"
/**
 * swap-int - swap the value of two integers
 * @a: first value
 * @b: second value
 * Description: swaps the value of *a to *b
 * Return: nothing
 **/
void swap_int(int *a, int *b)
{
int c = *a;
*a = *b;
*b = c;
}
