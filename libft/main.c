/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojamleh <ojamleh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/03 13:32:27 by ojamleh           #+#    #+#             */
/*   Updated: 2026/10/07 15:40:26 by ojamleh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include"libft.h"
#include<unistd.h>
#include <stdlib.h>
int main(void)
{
	char *str = "sosamas";
	char *set = "s";
	printf("%s",ft_strtrim(str, set));
	return (0);
}
