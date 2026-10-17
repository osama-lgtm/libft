/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojamleh <ojamleh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/03 17:02:54 by ojamleh           #+#    #+#             */
/*   Updated: 2026/10/14 17:51:17 by ojamleh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int a)
{
	char	*s;

	while (*s)
	{
		if (*s == (char)a)
			return ((char *)s);
		s++;
	}
	if (*s == (char)a)
		return ((char *)s);
	return (NULL);
}
