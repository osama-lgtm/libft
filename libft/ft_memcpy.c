/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojamleh <ojamleh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/03 17:04:21 by ojamleh           #+#    #+#             */
/*   Updated: 2026/10/05 14:52:08 by ojamleh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stddef.h>
void	*ft_memcpy( void *dest, const void *src, size_t n)
{
	char	*d = (char *)dest;
	char	*s = (char *)src;
	while (*s && n--)
	{
		*d = *s;
		d++;
		s++;
	}
	return (dest);
}