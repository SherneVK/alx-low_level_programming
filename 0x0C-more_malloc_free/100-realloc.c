#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _realloc - Reallocates a memory block using malloc and free
 * @ptr: A pointer to the memory previously allocated with malloc
 * @old_size: The size, in bytes, of the allocated space for ptr
 * @new_size: The new size, in bytes, of the new memory block
 *
 * Return: A pointer to the reallocated memory block,
 *         or NULL if new_size is 0 or if malloc fails
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
    void *new_ptr;
    unsigned int i;

    if (ptr == NULL)
        return malloc(new_size);

    if (new_size == 0)
    {
        free(ptr);
        return NULL;
    }

    if (new_size == old_size)
        return ptr;

    new_ptr = malloc(new_size);

    if (new_ptr == NULL)
        return NULL;

    if (new_size > old_size)
        new_size = old_size;

    char *ptr_char = (char *)ptr;
    char *new_ptr_char = (char *)new_ptr;

    for (i = 0; i < new_size; i++)
        new_ptr_char[i] = ptr_char[i];

    free(ptr);

    return new_ptr;
}

