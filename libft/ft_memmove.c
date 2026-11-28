/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdinis-d <mdinis-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 15:39:53 by mdinis-d          #+#    #+#             */
/*   Updated: 2026/11/27 12:57:03 by mdinis-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*destiny;
	const unsigned char	*source;

	if (!dest && !src)
		return (dest);
	if (dest == src || n == 0)
		return (dest);
	destiny = (unsigned char *)dest;
	source = (const unsigned char *)src;
	if (destiny > source)
	{
		while (n > 0)
		{
			n--;
			destiny[n] = source[n];
		}
	}
	else
		ft_memcpy(dest, src, n);
	return (dest);
}
