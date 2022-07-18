#include "main.h"

/**
 * _memcpy - functions that copies memory area
 * @dest: memory area
 * @src: source area
 * @n: length of src
 * Return: Pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
