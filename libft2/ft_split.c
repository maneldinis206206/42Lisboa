#include "libft.h"
#include <stdlib.h>

static size_t word_count(char const *s, char c)
{
	size_t count;

	count = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
		{
			count++;
			while (*s && *s != c)
				s++;
		}
	}
	return (count);
}

static void free_words(char **words, size_t count)
{
	while (count > 0)
		free(words[--count]);
	free(words);
}

char **ft_split(char const *s, char c)
{
	size_t i;
	size_t start;
	size_t k;
	size_t count;
	char **words;

	count = word_count(s, c);
	words = (char **)ft_calloc(count + 1, sizeof(char *));
	if (!words)
		return (NULL);
	i = 0;
	k = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		start = i;
		while (s[i] && s[i] != c)
			i++;
		if (i > start)
		{
			words[k] = ft_substr(s, (unsigned int)start, i - start);
			if (!words[k++])
				return (free_words(words, k - 1), NULL);
		}
	}
	return (words);
}
