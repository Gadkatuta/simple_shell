#include "shell.h"

/**
 * bfree - frees a pointer and NULLs the address
 * @ptr: address of, pointer to free
 *
 * Return: 1 if it iss freed, otherwise it will get  0.
 */
int bfree(void **ptr)
{
	if (ptr && *ptr)
	{
		free(*ptr);
		*ptr = NULL;
		return (1);
	}
	return (0);
}

