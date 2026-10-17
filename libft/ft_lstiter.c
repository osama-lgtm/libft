/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojamleh <ojamleh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/10 18:30:45 by ojamleh           #+#    #+#             */
/*   Updated: 2026/10/14 17:19:35 by ojamleh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst)
		return ;
	if (f)
	{
		while (lst)
		{
			f(lst->content);
			lst = lst->next;
		}
	}
}

void print_content(void *content)
{
    printf("%s\n", (char *)content);
}

void print_upper(void *content)
{
    char *str = (char *)content;
    int i = 0;
    while (str[i])
    {
        if (str[i] >= 'a' && str[i] <= 'z')
            putchar(str[i] - 32);
        else
            putchar(str[i]);
        i++;
    }
    putchar('\n');
}

int main(void)
{
    t_list *n1;
    t_list *n2;
    t_list *n3;

    // إنشاء العقد باستخدام ft_lstnew ومحتوى محجوز بـ strdup
    n1 = ft_lstnew(ft_strdup("osama"));
    n2 = ft_lstnew(ft_strdup("ahmad"));
    n3 = ft_lstnew(ft_strdup("farah"));

    // ربط القائمة
    n1->next = n2;
    n2->next = n3;
    n3->next = NULL;

    printf("--- Testing ft_lstiter with print_content ---\n");
    ft_lstiter(n1, print_content);

    printf("\n--- Testing ft_lstiter with print_upper ---\n");
    ft_lstiter(n1, print_upper);

    ft_lstclear(&n1, free);

    return (0);
}