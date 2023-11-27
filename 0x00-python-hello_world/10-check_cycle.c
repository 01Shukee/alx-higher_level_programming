#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * _realloc - Reallocate a memory block
 * @ptr: The pointer to the previous memory block
 * @old_size: The size of the old memory block
 * @new_size: The size of the new memory block
 *
 * Return: The pointer to the new memory block otherwise NULL
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
    void *new_ptr;

    if (new_size == old_size)
        return ptr;

    if (ptr != NULL)
    {
        if (new_size == 0)
        {
            free(ptr);
            return NULL;
        }

        new_ptr = malloc(new_size);
        if (new_ptr != NULL)
        {
            memcpy(new_ptr, ptr, old_size < new_size ? old_size : new_size);
            free(ptr);
            return new_ptr;
        }

        free(ptr);
        return NULL;
    }
    else
    {
        new_ptr = malloc(new_size);
        return new_ptr;
    }
}
