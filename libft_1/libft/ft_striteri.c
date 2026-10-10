/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojamleh <ojamleh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/10 15:16:04 by ojamleh           #+#    #+#             */
/*   Updated: 2026/10/10 15:17:31 by ojamleh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"
#include <stddef.h>

void ft_striteri(char *s, void (*f)(unsigned int, char*))
{
    size_t i;
    if(!s || !f)
        return;
    i = 0;
    while(s[i])
    {
        f(i, s[i]);
        i++;
    }
}