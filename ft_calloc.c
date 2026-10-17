/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojamleh <ojamleh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/05 13:59:59 by ojamleh           #+#    #+#             */
/*   Updated: 2026/10/17 12:58:36 by ojamleh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t			bytes;
	unsigned char	*p;

	bytes = nmemb * size;
	if (nmemb == 0 || size == 0)
		return (malloc(0));
	if (nmemb != 0 && bytes / nmemb != size)
		return (NULL);
	p = malloc(bytes);
	if (p == NULL)
		return (NULL);
	ft_bzero(p, bytes);
	return (p);
}
/*
int main()
{
    int *arr = ft_calloc(4, sizeof(char));
    for(int i = 0; i < 5; i++)
        printf("%d ", arr[i]);
    free(arr);
    return 0;
}
*/