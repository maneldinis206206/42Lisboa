#include "libft.h"
#include <stdlib.h>

char *ft_strdup(const char *s)
{
	size_t len;
	char *copy;

	len = ft_strlen(s);
	copy = (char *)malloc(len + 1);
	if (!copy)
		return (NULL);
	ft_memcpy(copy, s, len + 1);
	return (copy);
}
