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
	size_t				i;
	const unsigned char	*source;
	unsigned char		*destiny;

	source = (const unsigned char *)src;
	destiny = (unsigned char *)dst;
	i = 0;
	while (i < n)
	{
		destiny[i] = source[i];
		i++;
	}
	return (dst);
}

