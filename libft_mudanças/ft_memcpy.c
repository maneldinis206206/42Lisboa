/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdinis-d <mdinis-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 15:39:49 by mdinis-d          #+#    #+#             */
/*   Updated: 2026/11/21 17:20:03 by mdinis-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t				byte_index;
	const unsigned char	*source;
	unsigned char		*destiny;

	source = (const unsigned char *)src;
	destiny = (unsigned char *)dst;
	byte_index = 0;
	while (byte_index < n)
	{
		destiny[byte_index] = source[byte_index];
		byte_index++;
	}
	return (dst);
}
