/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdinis-d <mdinis-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 15:40:14 by mdinis-d          #+#    #+#             */
/*   Updated: 2026/11/17 13:21:48 by mdinis-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	char_index;

	if (!s)
		return ;
	char_index = 0;
	while (s[char_index])
	{
		write(fd, &s[char_index], 1);
		char_index++;
	}
}
