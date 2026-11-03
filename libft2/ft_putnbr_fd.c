#include "libft.h"
#include <unistd.h>

void ft_putnbr_fd(int n, int fd)
{
	long value;
	char digit;

	value = n;
	if (value < 0)
	{
		(void)write(fd, "-", 1);
		value = -value;
	}
	if (value >= 10)
		ft_putnbr_fd((int)(value / 10), fd);
	digit = (char)(value % 10 + '0');
	(void)write(fd, &digit, 1);
}
