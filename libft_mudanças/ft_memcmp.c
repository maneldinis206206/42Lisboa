/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdinis-d <mdinis-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 15:39:44 by mdinis-d          #+#    #+#             */
/*   Updated: 2026/11/18 15:52:57 by mdinis-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*str1;
	const unsigned char	*str2;
	size_t				byte_index;

	str1 = (const unsigned char *)s1;
	str2 = (const unsigned char *)s2;
	byte_index = 0;
	while (byte_index < n)
	{
		if (str1[byte_index] != str2[byte_index])
			return (str1[byte_index] - str2[byte_index]);
		byte_index++;
	}
	return (0);
}
