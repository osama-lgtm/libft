/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojamleh <ojamleh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/10 15:16:29 by ojamleh           #+#    #+#             */
/*   Updated: 2026/10/10 17:11:47 by ojamleh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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

static void	free_words(char **words)
{
	while (*words)
	{	
		free(*words);
		words--;
	}
	free(words);
}

char	**ft_split(char const *s, char c)
{
	char	**words;
	size_t	start;
	size_t	pos;

	words = malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (!words)
		return (NULL);
	pos = 0;
	
	words = NULL;
	return (words);
}
/*
while (s[pos])
	{
		while (s[pos] && s[pos] == c)
			pos++;
		start = pos;
		while (s[pos] && s[pos] != c)
			pos++;
		if (pos > start)
		{
			*words = ft_substr(s, start, pos - start);
			if (!words)
			{
				free_words(words);
				return (NULL);
			}
			words++;
		}
	}
*/