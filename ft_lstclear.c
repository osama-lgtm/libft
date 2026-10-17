/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojamleh <ojamleh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/10 18:30:33 by ojamleh           #+#    #+#             */
/*   Updated: 2026/10/17 17:42:21 by ojamleh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*temp;

	if (!lst || !*lst)
		return ;
	while (*lst)
	{
		temp = (*lst)->next;
		if (del)
			del((*lst)->content);
		free(*lst);
		*lst = temp;
	}
	*lst = NULL;
}

/*int main()
{
	t_list *n1;
	t_list *n2;
	t_list *n3;
	t_list *n4;
	n1 = ft_lstnew(ft_strdup("osama"));
    n2 = ft_lstnew(ft_strdup("ahmad"));
    n3 = ft_lstnew(ft_strdup("farah"));
    n4 = ft_lstnew(ft_strdup("saif"));
	
	n1->next = n2;
	n2->next = n3;
	n3->next = n4;
	n4->next = NULL;

	ft_lstclear(&n3, free);

	t_list *temp = n1;
	for(int i = 0;i <= 4;i++)
	{
		printf("%s ",temp->content);
		temp = temp->next;
	}
	ft_lstclear(&n1, free);
	return 0;
}*/
