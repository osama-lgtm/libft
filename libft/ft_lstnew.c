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
    t_list *n1;
    t_list *n2;
    t_list *n3;
    n1->next = n2;
    n2->next = NULL;
    n1 = ft_lstnew("osama");
    n2 = ft_lstnew("farah");
    n3 = ft_lstnew("ahamd");
    ft_lstadd_front(&n1, n3);
    while(n1)
    {
        printf("%s\n",n1->content);
        n1 = n1->next;
    }
    return 0;
}
*/