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

#include "libft.h"
#include <stdlib.h>
#include <stddef.h>
void *ft_calloc(size_t nmemb, size_t size)
{
    size_t bytes;

    bytes = nmemb * size;
    if(nmemb != 0 && bytes / nmemb != size)
        return(NULL);
    unsigned char *p = malloc(bytes);
    if(p == NULL)
        return (malloc(0));
    ft_bzero(p, bytes);
    return (p);
}