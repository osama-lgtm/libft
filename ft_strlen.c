/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojamleh <ojamleh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/03 16:53:49 by ojamleh           #+#    #+#             */
/*   Updated: 2026/10/17 13:35:20 by ojamleh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *a)
{
	size_t	i;

	i = 0;
	while (a[i] != '\0')
		i++;
	return (i);
}
/*
#include <stdio.h>
int main(void)
{
	const char *str = "Hello, World!";
	size_t length = ft_strlen(str);
	printf("Length of the string: %zu\n", length);
	return 0;
}
*/