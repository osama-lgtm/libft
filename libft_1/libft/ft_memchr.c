/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojamleh <ojamleh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/03 17:04:50 by ojamleh           #+#    #+#             */
/*   Updated: 2026/10/05 14:52:04 by ojamleh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stddef.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
		unsigned char	*p = (unsigned char *) s;
	while (n--)
	{
		if (*p == (unsigned char)c)
			return (p);
		p++;
	}
	return (NULL);
}
