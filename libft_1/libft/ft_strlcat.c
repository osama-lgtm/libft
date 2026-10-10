/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojamleh <ojamleh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/10 15:16:11 by ojamleh           #+#    #+#             */
/*   Updated: 2026/10/10 15:17:31 by ojamleh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stddef.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	dst_len;
	size_t	src_len;

	i = 0;
	while (dst[i] && i < size)
		i++;
	dst_len = i;
	src_len = 0;
	while (src[src_len])
		src_len++;
	if (size <= dst_len)
		return (size + src_len);
	j = 0;
	while (src[j] && (dst_len + j + 1) < size)
	{
		dst[dst_len + j] = src[j];
		j++;
	}
	dst[dst_len + j] = '\0';
	return (dst_len + src_len);
}