/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojamleh <ojamleh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/07 15:10:57 by ojamleh           #+#    #+#             */
/*   Updated: 2026/10/07 15:43:20 by ojamleh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

static  size_t   start_index(char const *a, char const *set)
{
    size_t  i;
    size_t  st;

    st = 0;
    i = 0;
    while(a[st])
    {
        while(set[i])
        {
            if(set[i] == a[st])
                break;
            i++;
        }
        if(i == ft_strlen(set) - 1)
            return (st + 1);
        st++;
    }
    return (0);
}

static  size_t  end_index(char const *a, char const *set)
{
    size_t i;
    size_t en;

    en = ft_strlen(a) - 1;
    i = 0;
    while(en >= 0)
    {
        while (set[i])
        {
            if (set[i] == a[en])
                break;
            i++;
        }
        if (i == ft_strlen(set) - 1)
            return (en - 1);
        en--;
    }
    return (0);
}

char    *ft_strtrim(char const *s1, char const *set)
{
    char    *S;
    size_t  en;
    size_t  st;

    st = start_index(s1, set);
    en = end_index(s1, set);
    S = malloc(en - st);
    S = ft_substr(s1, (unsigned int)st, en - st);
    return (S);
}

int main(void)
{
	char *str = "sosamas";
	char *set = "s";
	printf("%s",ft_strtrim(str, set));
	return (0);
}