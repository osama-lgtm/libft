/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojamleh <ojamleh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/03 17:03:28 by ojamleh           #+#    #+#             */
/*   Updated: 2026/10/03 17:14:45 by ojamleh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

size_t	ft_strlcpy(char *dest,const char *src, size_t n)
{
	int	len = 0;
	while (src[len] && --n)
	{
		dest[len] = src[len];
		len++;
	}
	dest[len] = '\0';
	while(src[len])
	{
		len++;
	}
	return len;
}