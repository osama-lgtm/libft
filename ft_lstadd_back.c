/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojamleh <ojamleh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/10 18:29:35 by ojamleh           #+#    #+#             */
/*   Updated: 2026/10/17 17:37:04 by ojamleh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!lst || !new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	last = ft_lstlast(*lst);
	last->next = new;
}
/*
int main()
{
	t_list *n1;
	t_list *n2;
	t_list *last;
	last->content = "is osama";
	n1->content = "my";
	n2->content = "name";
	n1->next = n2;
	n2->next = NULL;
	ft_lstadd_back(&n1, last);
	for(int i = 0;i < 3; i++)
	{
		printf("%s ", n1->content);
		n1 = n1->next;
	}
}*/