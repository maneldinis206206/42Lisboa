#include <stdio.h>
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int j;

	j = 0;
	i = 0;
	while (dest[i] !='\0' && i < size)
	{
		i++;
	}
	while (src[j] != '\0' && i < size - 1)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	if (i < size)
	{
		dest[i] = '\0';
	}
	while (src[j] != '\0')
	{
		j++;
	}
	return(j + i);
}

int main (void)
{
	char src[] = "World!";
	char dest[20] = "Hello ";
	printf("%u\n", ft_strlcat(dest, src, 5));
	printf("%s\n", src);
	printf("%s\n", dest);
	return(0);
}
