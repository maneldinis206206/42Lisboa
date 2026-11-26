/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdinis-d <mdinis-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 15:39:40 by mdinis-d          #+#    #+#             */
/*   Updated: 2026/11/09 16:59:52 by mdinis-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*str;
	size_t				byte_index;

	byte_index = 0;
	str = (const unsigned char *)s;
	while (byte_index < n)
	{
		if (str[byte_index] == (unsigned char)c)
			return ((void *)&str[byte_index]);
		byte_index++;
	}
	return (NULL);
}
