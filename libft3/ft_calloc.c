#include "libft.h"
#include <stdlib.h>

void *ft_calloc(size_t n, size_t size)
{
    void    *ptr;
    size_t  total;

    if (size != 0 && n > (size_t)-1 / size)
        return (NULL);

    total = n * size;
    ptr = malloc(total);
    if (ptr == NULL)
        return (NULL);

    ft_bzero(ptr, total);
    return (ptr);
}