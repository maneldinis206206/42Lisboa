/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdinis-d <mdinis-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 15:41:05 by mdinis-d          #+#    #+#             */
/*   Updated: 2026/11/09 17:00:45 by mdinis-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	char_index;

	char_index = 0;
	while (char_index < n && s1[char_index]
		&& s1[char_index] == s2[char_index])
		char_index++;
	if (char_index < n)
		return ((unsigned char)s1[char_index]
			- (unsigned char)s2[char_index]);
	return (0);
}
