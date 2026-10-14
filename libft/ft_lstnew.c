/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojamleh <ojamleh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/10 15:15:30 by ojamleh           #+#    #+#             */
/*   Updated: 2026/10/14 17:25:04 by ojamleh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	if (!content)
		return (NULL);
	new = malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}

/*
int main()
{
    t_list *head;
    t_list *n1;
    t_list *n2;
    t_list *n3;
    head = n1;
    n1->next = n2;
    n2->next = NULL;
    n1->content = "osama";
    n2->content = "fares";
    n3 = ft_lstnew("ahamd");
    ft_lstadd_front(&head, n3);
    while(head)
    {
        printf("%s\n",head->content);
        head = head->next;
    }
    return 0;
}*/
