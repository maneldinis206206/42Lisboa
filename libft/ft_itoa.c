/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdinis-d <mdinis-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 15:39:26 by mdinis-d          #+#    #+#             */
/*   Updated: 2026/11/18 16:10:28 by mdinis-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_digits(int n)
{
	int	count;

	count = 0;
	if (n <= 0)
		count++;
	while (n != 0)
	{
		n /= 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char			*str;
	int				len;
	unsigned int	num;

	len = count_digits(n);
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	if (n < 0)
		num = -(unsigned int)n;
	else
		num = (unsigned int)n;
	str[len] = '\0';
	while (len > 0)
	{
		if (n < 0 && len == 1)
			str[0] = '-';
		else
		{
			str[len - 1] = (num % 10) + '0';
			num /= 10;
		}
		len--;
	}
	return (str);
}
