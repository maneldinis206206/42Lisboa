/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdinis-d <mdinis-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 16:12:20 by mdinis-d          #+#    #+#             */
/*   Updated: 2026/11/21 17:44:49 by mdinis-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	char_index;

	char_index = 0;
	while (s[char_index])
	{
		if ((unsigned char)s[char_index] == (unsigned char)c)
			return ((char *)&s[char_index]);
		char_index++;
	}
	if ((unsigned char)c == '\0')
		return ((char *)&s[char_index]);
	return (NULL);
}
