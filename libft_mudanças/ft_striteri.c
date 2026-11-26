/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdinis-d <mdinis-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 15:40:36 by mdinis-d          #+#    #+#             */
/*   Updated: 2026/11/09 17:00:23 by mdinis-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	char_index;

	if (!s || !f)
		return ;
	char_index = 0;
	while (s[char_index] != '\0')
	{
		f(char_index, &s[char_index]);
		char_index++;
	}
}
