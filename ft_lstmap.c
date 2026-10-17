/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojamleh <ojamleh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/10 18:30:57 by ojamleh           #+#    #+#             */
/*   Updated: 2026/10/17 17:12:07 by ojamleh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*temp;
	void	*change;

	if (!del || !f)
		return (NULL);
	new = NULL;
	while (lst)
	{
		change = f(lst->content);
		temp = ft_lstnew(change);
		if (!temp)
		{
			del(change);
			ft_lstclear(&new, del);
			return (NULL);
		}
		ft_lstadd_back(&new, temp);
		lst = lst->next;
	}
	return (new);
}
/*
int main()
{
    t_list *n1;
    t_list *n2;
    t_list *n3;
    t_list *new;
    n1->next = n2;
    n2->next = n3;
    n3->next = NULL;
    n1->content = 'a';
    n2->content = 'b';
    n3->content = 'c';
    new = ft_lstmap(n1, ft_tolower(n1));
    return 0;
}*/
