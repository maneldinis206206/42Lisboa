/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdinis-d <mdinis-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 15:40:20 by mdinis-d          #+#    #+#             */
/*   Updated: 2026/11/21 13:59:11 by mdinis-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(char const *s, char c)
{
	int	i;
	int	words;

	i = 0;
	words = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			words++;
			while (s[i] && s[i] != c)
				i++;
		}
		else
			i++;
	}
	return (words);
}

static char	*get_word(char const *s, int *i, char c)
{
	char	*word;
	int		start;
	int		j;

	start = *i;
	while (s[*i] && s[*i] != c)
		(*i)++;
	word = malloc(sizeof(char) * (*i - start + 1));
	if (!word)
		return (NULL);
	j = 0;
	while (start < *i)
		word[j++] = s[start++];
	word[j] = '\0';
	return (word);
}

static void	free_words(char **words, int count)
{
	int	i;

	i = 0;
	while (i < count)
	{
		free(words[i]);
		i++;
	}
	free(words);
}

static int	fill_words(char **result, char const *s, char c)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i])
		{
			result[j] = get_word(s, &i, c);
			if (!result[j])
				return (free_words(result, j), 0);
			j++;
		}
	}
	result[j] = NULL;
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**result;

	if (!s)
		return (NULL);
	result = malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (!result)
		return (NULL);
	if (!fill_words(result, s, c))
		return (NULL);
	return (result);
}
