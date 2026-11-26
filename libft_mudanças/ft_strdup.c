/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdinis-d <mdinis-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 15:40:32 by mdinis-d          #+#    #+#             */
/*   Updated: 2026/11/17 13:22:04 by mdinis-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*copy;
	size_t	char_index;

	char_index = 0;
	copy = malloc(ft_strlen(s) + 1);
	if (copy == NULL)
		return (NULL);
	while (s[char_index] != '\0')
	{
		copy[char_index] = s[char_index];
		char_index++;
	}
	copy[char_index] = '\0';
	return (copy);
}
