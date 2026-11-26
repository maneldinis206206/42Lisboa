/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdinis-d <mdinis-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 15:41:00 by mdinis-d          #+#    #+#             */
/*   Updated: 2026/11/17 16:30:13 by mdinis-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*result;
	unsigned int	char_index;

	if (!s || !f)
		return (NULL);
	result = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!result)
		return (NULL);
	char_index = 0;
	while (s[char_index])
	{
		result[char_index] = f(char_index, s[char_index]);
		char_index++;
	}
	result[char_index] = '\0';
	return (result);
}
