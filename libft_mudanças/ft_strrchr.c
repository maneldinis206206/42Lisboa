/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdinis-d <mdinis-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 15:41:16 by mdinis-d          #+#    #+#             */
/*   Updated: 2026/11/21 17:59:27 by mdinis-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	char_index;

	char_index = 0;
	while (s[char_index])
		char_index++;
	if (c == 0)
		return ((char *)&s[char_index]);
	while (char_index >= 0)
	{
		if (s[char_index] == (char)c)
			return ((char *)&s[char_index]);
		char_index--;
	}
	return (NULL);
}
