/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojamleh <ojamleh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/03 17:03:28 by ojamleh           #+#    #+#             */
/*   Updated: 2026/10/14 18:00:38 by ojamleh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t n)
{
	int	len;

	len = 0;
	while (src[len] && --n)
	{
		dest[len] = src[len];
		len++;
	}
	dest[len] = '\0';
	while (src[len])
		len++;
	return (len);
}
