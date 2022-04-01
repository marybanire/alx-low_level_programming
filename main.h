#ifdef MAIN_H
#define MAIN_H

/**
 * _putchar - writes the character c to stdout
 * _islower - return 1 if c is lowercase, 0 otherwise
 * _isalpha - return 1 if c is upper or lowercase, 0 otherwise
 * _abs - computes absolute value of integer
 * _isupper - checks if char is capital letter
 * _isdigit - checks if int is a digit 0-9
 **/

int _putchar(char c);
int _islower(int c);
int _isalpha(int c);
int _abs(int n);
int _isupper(int c);
int _isdigit(int c);
int _strlen(char *s);
void puts(char *s);
char *_srtcpy(char *dest, char *src);
int _atoi(char *s);
char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char c);
unsigned int _strspn(char *s, char *accept);
char*_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);
#endif
