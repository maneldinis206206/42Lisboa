#include "libft.h"
#include <stdlib.h>

static size_t digits(long n)
{
	size_t count;

	count = (n <= 0);
	while (n)
	{
		count++;
		n /= 10;
	}
	return (count);
}

char *ft_itoa(int n)
{
	long value;
	size_t len;
	char *str;

	value = n;
	len = digits(value);
	str = (char *)malloc(len + 1);
	if (!str)
		return (NULL);
	str[len] = '\0';
	if (value < 0)
		value = -value;
	while (len > (n < 0))
	{
		str[--len] = (value % 10) + '0';
		value /= 10;
	}
	if (n < 0)
		str[0] = '-';
	return (str);
}
