#include "main.h"

/**
 * _memcpy - copies n bytes from the memory area pointed
 * @dest: a pointer to the memory area
 * @src: the source buffer
 * @n: the number of bytes to be copied
 *
 * Return: a pointer to the destination @dest
 */
void *_memcpy(void *dest, const void *src, size_t n)
{
	unsigned int index;
	unsigned char *destination = dest;
	const unsigned char *source = src;

	for (index = 0; index < n; index++)
		destination[index] = source[index];

	return (dest);
}
