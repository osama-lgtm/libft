/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojamleh <ojamleh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/10 18:30:33 by ojamleh           #+#    #+#             */
/*   Updated: 2026/10/14 17:17:26 by ojamleh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*temp;

	if (!lst || !*lst)
		return ;
	if (del)
	{
		while (temp)
		{
			temp = (*lst)->next;
			del(temp->content);
			free(temp);
			temp = temp->next;
		}
		(*lst)->next = NULL;
	}
}
