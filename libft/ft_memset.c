/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojamleh <ojamleh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/03 17:05:09 by ojamleh           #+#    #+#             */
/*   Updated: 2026/10/05 14:44:31 by ojamleh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void *ft_memset(void *dest, int src, size_t n)
{
	unsigned char *a;

	a = dest;
	while(n > 0)
	{
		*a = src;
		a++;
		n--;
	}
	return(dest);
}