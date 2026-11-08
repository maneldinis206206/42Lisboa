#include "libft.h"
#include <stdlib.h>

char *ft_strdup(const char *s)
{
    char    *copy;
    size_t  i;

    i = 0;
    copy = malloc(ft_strlen(s) + 1);
    if (copy == NULL)
        return (NULL);

    while (s[i] != '\0')
    {
        copy[i] = s[i];
        i++;
    }
    copy[i] = '\0';

    return (copy);
}