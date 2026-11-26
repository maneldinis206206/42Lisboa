/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdinis-d <mdinis-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 15:38:39 by mdinis-d          #+#    #+#             */
/*   Updated: 2026/11/09 16:59:07 by mdinis-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	char_index;
	int	sign;
	int	result;

	char_index = 0;
	sign = 1;
	result = 0;
	while (str[char_index] == ' '
		|| (str[char_index] >= 9 && str[char_index] <= 13))
		char_index++;
	if (str[char_index] == '-' || str[char_index] == '+')
	{
		if (str[char_index] == '-')
			sign = -1;
		char_index++;
	}
	while (str[char_index] >= '0' && str[char_index] <= '9')
	{
		result = result * 10 + (str[char_index] - '0');
		char_index++;
	}
	return (result * sign);
}
