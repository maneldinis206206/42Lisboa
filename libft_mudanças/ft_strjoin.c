/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdinis-d <mdinis-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 15:40:41 by mdinis-d          #+#    #+#             */
/*   Updated: 2026/11/17 13:22:10 by mdinis-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	dest_index;
	size_t	source_index;

	if (!s1 || !s2)
		return (NULL);
	str = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!str)
		return (NULL);
	dest_index = 0;
	while (s1[dest_index] != '\0')
	{
		str[dest_index] = s1[dest_index];
		dest_index++;
	}
	source_index = 0;
	while (s2[source_index] != '\0')
	{
		str[dest_index] = s2[source_index];
		dest_index++;
		source_index++;
	}
	str[dest_index] = '\0';
	return (str);
}
