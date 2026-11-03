#include "libft.h"
#include <stdlib.h>

char *ft_strjoin(char const *s1, char const *s2)
{
	size_t a;
	size_t b;
	char *joined;

	a = ft_strlen(s1);
	b = ft_strlen(s2);
	joined = (char *)malloc(a + b + 1);
	if (!joined)
		return (NULL);
	ft_memcpy(joined, s1, a);
	ft_memcpy(joined + a, s2, b + 1);
	return (joined);
}
