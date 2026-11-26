/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdinis-d <mdinis-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 15:39:56 by mdinis-d          #+#    #+#             */
/*   Updated: 2026/11/21 17:12:20 by mdinis-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			byte_index;
	unsigned char	*str;

	str = (unsigned char *)s;
	byte_index = 0;
	while (byte_index < n)
	{
		str[byte_index] = c;
		byte_index++;
	}
	return (s);
}
