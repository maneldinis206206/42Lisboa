#include "libft.h"
#include <stdio.h>

char *ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if ((char)c == '\0')
		return ((char *)s);
	return (NULL);
}

int main(void)
{
    char *result;

    result = ft_strchr("ola", 'z');
    if (result != NULL)
        printf("%s\n", result);
    else
        printf("Caracter nao encontrado\n");
    return (0);
}