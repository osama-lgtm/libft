/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojamleh <ojamleh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/03 17:00:03 by ojamleh           #+#    #+#             */
/*   Updated: 2026/10/03 17:11:30 by ojamleh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"
char	*ft_strdup(const char *str1)
{
	char *str2;
	int	len;
	len = ft_strlen(str1);
	str2 = malloc(sizeof(char) * (len + 1));
	if (!str2)
		return (NULL);
	len = 0;
	while(str1[len] != '\0')
	{
		str2[len] = str1[len];
		len++;
	}
	str2[len] = '\0';
	return (str2);
}