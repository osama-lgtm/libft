/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojamleh <ojamleh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/05 15:01:23 by ojamleh           #+#    #+#             */
/*   Updated: 2026/10/05 16:21:22 by ojamleh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stddef.h>
void    *ft_memmove(void *dest, const void *src, size_t n)
{
    unsigned char *d = dest;
    const unsigned char *s = src;
    size_t i;
    i = 0;
    if(d < s)
    {
        while(i < n)
        {
            d[i] = s[i];
            i++;
        }
    }
    else
    {
        i = n;
        while(i)
        {
            d[i - 1] = s[i - 1];
            i--;
        }
    }
    return (d);
}