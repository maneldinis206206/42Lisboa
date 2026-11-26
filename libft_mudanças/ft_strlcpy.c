/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdinis-d <mdinis-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 15:40:51 by mdinis-d          #+#    #+#             */
/*   Updated: 2026/11/21 17:34:05 by mdinis-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	char_index;

	char_index = 0;
	if (size > 0)
	{
		while (src[char_index] != '\0' && char_index < size - 1)
		{
			dst[char_index] = src[char_index];
			char_index++;
		}
		dst[char_index] = '\0';
	}
	while (src[char_index] != '\0')
		char_index++;
	return (char_index);
}
