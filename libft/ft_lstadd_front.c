/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojamleh <ojamleh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/10 18:28:30 by ojamleh           #+#    #+#             */
/*   Updated: 2026/10/14 17:15:26 by ojamleh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}
/*
int main()
{
		t_list *n1;
	t_list *n2;
	t_list *first;
	first->content = "my";
	n1 = ft_lstnew("name");
	n2->content = "is osama";
	n1->next = n2;
	n2->next = NULL;
	ft_lstadd_front(&n1, first);

	for(int i = 0;i < 3; i++)
	{
		printf("%s ", first->content);
		first = first->next;
	}
}
*/