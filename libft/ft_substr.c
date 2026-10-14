/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojamleh <ojamleh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/07 15:10:49 by ojamleh           #+#    #+#             */
/*   Updated: 2026/10/14 18:13:24 by ojamleh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	int		i;
	char	*str;

	i = 0;
	str = malloc(len);
	if (len == 0)
	{
		free(str);
		return (NULL);
	}
	if (!str)
		return (NULL);
	while (len > 0)
	{
		str[i] = s[start];
		start++;
		len--;
		i++;
	}
	return (str);
}
