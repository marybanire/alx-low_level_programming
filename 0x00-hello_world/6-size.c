#include <stdio.h>

/**
* main - prints the size of various types
* Return: 0 if exited properly, non-zero otherwise
*/
int main(void)
{
	   printf("Size of a char: %1d byte(s)\n", sizeof(char));
	   printf("Size of an int: %1d byte(s)\n", sizeof(int));
	   printf("Size of a long int: %1d byte(s)\n", sizeof(long));
	   printf("Size of a long long int: %1d byte(s)\n", sizeof(long long));
	   printf("Size of a float: %1d byte(s)\n", sizeof(float));
return (0);
}