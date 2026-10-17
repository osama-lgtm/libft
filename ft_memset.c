/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojamleh <ojamleh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/03 17:05:09 by ojamleh           #+#    #+#             */
/*   Updated: 2026/10/14 17:40:02 by ojamleh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *dest, int src, size_t n)
{
	unsigned char	*a;

	a = dest;
	while (n > 0)
	{
		*a = src;
		a++;
		n--;
	}
	return (dest);
}
