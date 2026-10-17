/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojamleh <ojamleh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/03 17:03:10 by ojamleh           #+#    #+#             */
/*   Updated: 2026/10/17 12:26:11 by ojamleh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *a, int A)
{
	char	*last;

	last = NULL;
	if (A == '\0')
		return ((char *)(a + ft_strlen(a)));
	while (*a != '\0')
	{
		if (*a == (char)A)
			last = (char *)a;
		a++;
	}
	return (last);
}
