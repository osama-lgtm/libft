/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojamleh <ojamleh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/03 13:32:27 by ojamleh           #+#    #+#             */
/*   Updated: 2026/10/05 16:29:05 by ojamleh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include"libft.h"
#include<unistd.h>
#include<string.h>
#include <stdlib.h>
int main(void)
{
char *a = "osama";
char *b = "jamleh";
memmove(a,b,sizeof(char)*6);
printf("%s",a);
	return (0);
}
