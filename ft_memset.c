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
	unsigned char *a = dest;
	size_t i;
	i = 0;
	while(n > 0)
	{
		a[i] = src;
		i++;
		n--;
	}
	return(a);
}