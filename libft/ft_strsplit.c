#include "libft.h"
#include <stdlib.h>

static size_t	count_words(char const *s, char c)
{
	size_t	count;

	count = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s)
			count++;
		while (*s && *s != c)
			s++;
	}
	return (count);
}

static void	free_words(char **words, size_t count)
{
	while (count > 0)
		free(words[--count]);
	free(words);
}

char	**ft_split(char const *s, char c)
{
	char	**words;
	size_t	i;
	size_t	start;
	size_t	pos;

	words = malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (!words)
		return (NULL);
	i = 0;
	pos = 0;
	while (s[pos])
	{
		while (s[pos] && s[pos] == c)
			pos++;
		start = pos;
		while (s[pos] && s[pos] != c)
			pos++;
		if (pos > start)
		{
			words[i] = ft_substr(s, start, pos - start);
			if (!words[i])
			{
				free_words(words, i);
				return (NULL);
			}
			i++;
		}
	}
	words[i] = NULL;
	return (words);
}