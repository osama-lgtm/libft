/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojamleh <ojamleh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/10 15:15:36 by ojamleh           #+#    #+#             */
/*   Updated: 2026/10/14 17:11:57 by ojamleh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count(int n)
{
	int	count;

	count = 0;
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

	i = 0;
	count = ft_count(n);
	str = malloc(count--);
	if (!str)
		return (NULL);
	if (n < 0)
	{
		str[0] = '-';
		n *= -1;
	}
	while (count >= 0)
	{
		if (str[count] == '-')
			break ;
		str[count] = '0' + n % 10;
		n = n / 10;
		count--;
	}
	return (str);
}
/*
int main()
{
    int a = 12;
    printf("%s",ft_itoa(a));
}*/
