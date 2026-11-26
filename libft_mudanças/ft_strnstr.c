/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdinis-d <mdinis-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 15:41:10 by mdinis-d          #+#    #+#             */
/*   Updated: 2026/11/09 17:00:49 by mdinis-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	haystack_index;
	size_t	needle_index;

	haystack_index = 0;
	if (needle[0] == '\0')
		return ((char *)haystack);
	while (haystack[haystack_index] != '\0' && haystack_index < len)
	{
		needle_index = 0;
		while (needle[needle_index] != '\0'
			&& haystack[haystack_index + needle_index]
			== needle[needle_index]
			&& haystack_index + needle_index < len)
		{
			needle_index++;
		}
		if (needle[needle_index] == '\0')
			return ((char *)&haystack[haystack_index]);
		haystack_index++;
	}
	return (NULL);
}
