#include "libft.h"
#include <stdlib.h>

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t len;
	size_t i;
	char *mapped;

	len = ft_strlen(s);
	mapped = (char *)malloc(len + 1);
	if (!mapped)
		return (NULL);
	i = 0;
	while (i < len)
	{
		mapped[i] = f((unsigned int)i, s[i]);
		i++;
	}
	mapped[i] = '\0';
	return (mapped);
}
