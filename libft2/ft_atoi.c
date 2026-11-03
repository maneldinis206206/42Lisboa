#include "libft.h"

int ft_atoi(const char *str)
{
	long value;
	int sign;

	while (*str == ' ' || (*str >= '\t' && *str <= '\r'))
		str++;
	sign = 1;
	if (*str == '-' || *str == '+')
	{
		if (*str++ == '-')
			sign = -1;
	}
	value = 0;
	while (*str >= '0' && *str <= '9')
		value = value * 10 + (*str++ - '0');
	return ((int)(value * sign));
}
