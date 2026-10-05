/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojamleh <ojamleh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/05 13:59:59 by ojamleh           #+#    #+#             */
/*   Updated: 2026/10/05 14:52:08 by ojamleh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stddef.h>
void *ft_calloc(size_t nmemb, size_t size)
{
    size_t i;
    unsigned char *p = malloc(nmemb * size);
    i = 0;
    while(i < nmemb * size)
        p[i++] = 0;
    return (p);
}