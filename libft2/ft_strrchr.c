#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
	const char *last;

	last = NULL;
	while (1)
	{
		if (*s == (char)c)
			last = s;
		if (!*s)
			break ;
		s++;
	}
	return ((char *)last);
}
