/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdinis-d <mdinis-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 15:40:46 by mdinis-d          #+#    #+#             */
/*   Updated: 2026/11/21 18:16:06 by mdinis-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dest_length;
	size_t	source_index;

	source_index = 0;
	dest_length = 0;
	while (dest_length < size && dst[dest_length] != '\0')
		dest_length++;
	if (dest_length == size)
		return (size + ft_strlen(src));
	while (src[source_index] != '\0'
		&& dest_length + source_index + 1 < size)
	{
		dst[dest_length + source_index] = src[source_index];
		source_index++;
	}
	dst[dest_length + source_index] = '\0';
	return (dest_length + ft_strlen(src));
}
