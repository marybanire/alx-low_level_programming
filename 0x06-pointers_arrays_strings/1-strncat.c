#include "main.h"
/**
 * _strncat - concatenates specified values from src to dest
 * @src: second string to copy from
 * @dest: string to be overwritten
 * @n: number of values to concatenate
 * Description: concatenates n number of values from src to end of dest
 * Return: pointer to dest
 **/
char *_strncat(char *dest, char *src, int n)
{
int count = 0, count2 = 0;

while (*(dest + count != '\0')
{
count++;
}

for (j = 0; j < n; j++)
{
dest[i] = src[j];
i++;
}
if (dest[i - 1] != '\0')
dest[i] = '\0';

return (dest);
}
