/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdinis-d <mdinis-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 15:39:53 by mdinis-d          #+#    #+#             */
/*   Updated: 2026/11/21 18:18:51 by mdinis-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*destiny;
	const unsigned char	*source;
	size_t				byte_index;

	destiny = (unsigned char *)dest;
	source = (const unsigned char *)src;
	byte_index = 0;
	if (destiny > source)
	{
		while (n > 0)
		{
			n--;
			destiny[n] = source[n];
		}
	}
	else
	{
		while (byte_index < n)
		{
			destiny[byte_index] = source[byte_index];
			byte_index++;
		}
	}
	return (dest);
}
