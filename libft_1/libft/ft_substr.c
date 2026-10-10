/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojamleh <ojamleh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/07 15:10:49 by ojamleh           #+#    #+#             */
/*   Updated: 2026/10/10 16:48:22 by ojamleh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
char *ft_substr(char const *s, unsigned int start, size_t len)
{
    int i;
    char *str;

    i = 0;
    str = malloc(len);
    if (!str)
        return NULL;
    while (len > 0)
    {
        str[i] = s[start];
        start++;
        len--;
        i++;
    }
    return (str);
}