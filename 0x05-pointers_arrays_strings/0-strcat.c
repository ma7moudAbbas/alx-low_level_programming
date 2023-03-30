#include "main.h"
#include <stdio.h>
/**
 * _strcat - concatenates two strings
 * @dest : input value
 * @src : input value 
 * Return : void
 */
char *_strcat(char *dest, char *src)
{
	int dest_len = 0;
	char *dest_ptr = dest;

	while(*dest_ptr != '\0'){
		dest_len++;
		dest_ptr++;
	}

	while(*src != '\0'){
		*(dest_ptr + dest_len) = *src;
		src++;
		dest_len++;
	}
	*(dest_ptr + dest_len) = '\0';
	return dest 
}

int main(void)
{
    char s1[98] = "Hello ";
    char s2[] = "World!\n";
    char *ptr;

    printf("%s\n", s1);
    printf("%s", s2);
    ptr = _strcat(s1, s2);
    printf("%s", s1);
    printf("%s", s2);
    printf("%s", ptr);
    return (0);
}
