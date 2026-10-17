/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojamleh <ojamleh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/03 17:03:28 by ojamleh           #+#    #+#             */
/*   Updated: 2026/10/17 17:46:19 by ojamleh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t n)
{
	size_t	len;

	len = 0;
	if (n == 0)
		return (ft_strlen(src));
	while (src[len] && len < n - 1)
	{
		dest[len] = src[len];
		len++;
	}
	dest[len] = '\0';
	while (src[len])
		len++;
	return (len);
}
/*#include <stdio.h>
int main()
{
	char dest[10] = "osama";
	char *src = "rand1";
	printf("%zu\n%s\n%s",ft_strlcpy(dest, src, 0), dest, src);
	
}*/