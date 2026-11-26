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
	int	char_index;
	int	words;

	char_index = 0;
	words = 0;
	while (s[char_index])
	{
		if (s[char_index] != c)
		{
			words++;
			while (s[char_index] && s[char_index] != c)
				char_index++;
		}
		else
			char_index++;
	}
	return (words);
}

static char	*get_word(char const *s, int *char_index, char c)
{
	char	*word;
	int		start;
	int		word_index;

	start = *char_index;
	while (s[*char_index] && s[*char_index] != c)
		(*char_index)++;
	word = malloc(sizeof(char) * (*char_index - start + 1));
	if (!word)
		return (NULL);
	word_index = 0;
	while (start < *char_index)
		word[word_index++] = s[start++];
	word[word_index] = '\0';
	return (word);
}

static void	free_words(char **words, int count)
{
	int	word_index;

	word_index = 0;
	while (word_index < count)
	{
		free(words[word_index]);
		word_index++;
	}
	free(words);
}

static int	fill_words(char **result, char const *s, char c)
{
	int	char_index;
	int	word_index;

	char_index = 0;
	word_index = 0;
	while (s[char_index])
	{
		while (s[char_index] == c)
			char_index++;
		if (s[char_index])
		{
			result[word_index] = get_word(s, &char_index, c);
			if (!result[word_index])
				return (free_words(result, word_index), 0);
			word_index++;
		}
	}
	result[word_index] = NULL;
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
