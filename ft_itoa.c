/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojamleh <ojamleh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/10 15:15:36 by ojamleh           #+#    #+#             */
/*   Updated: 2026/10/17 15:43:31 by ojamleh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count(int n)
{
	int	count;

	count = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		n = n * -1;
		count++;
	}
	while (n > 0)
	{
		count++;
		n = n / 10;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	int			count;
	int			i;
	char		*str;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	i = 0;
	count = ft_count(n);
	str = malloc(count + 1);
	if (!str)
		return (NULL);
	str[count] = '\0';
	if (n < 0)
	{
		str[0] = '-';
		n *= -1;
	}
	if (n == 0)
		str[0] = '0';
	while (n > 0)
	{
		str[--count] = '0' + n % 10;
		n = n / 10;
	}
	return (str);
}
/*
#include <stdio.h>
int main()
{
    int a = -12312;
    printf("%s\n digits:%d",ft_itoa(a),ft_count(a));
}
*/