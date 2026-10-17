/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojamleh <ojamleh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/03 16:57:04 by ojamleh           #+#    #+#             */
/*   Updated: 2026/10/14 17:44:52 by ojamleh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *text, const char *cat)
{
	int	a;
	int	i;

	a = 0;
	i = 0;
	while (text[i])
		i++;
	while (cat[a] != '\0')
	{
		text[i + a] = cat[a];
		a++;
	}
	text[a + i] = '\0';
	return (text);
}
