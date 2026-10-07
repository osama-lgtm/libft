/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojamleh <ojamleh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/07 15:11:07 by ojamleh           #+#    #+#             */
/*   Updated: 2026/10/07 15:29:36 by ojamleh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


char *ft_strjoin(char const *s1, char const *s2)
{
    char const *S;
    size_t  i;
    size_t  d;

    i = ft_strlen(s1);
    d = ft_strlen(s2);
    S = malloc((i + d) * sizeof(char));
    ft_strcpy(S,s1);
    
    ft_strcat(S,s2);
    return (S);
}

/*
    while (s1[i])
        i++;
    while (s2[d])
        d++;
*/
/*while (i > 0)
    {
        *S = *s1;
        S++;
        s1++;
        i--;
    }
*/
/*while (d > 0)
    {
        *S = *s2;
        S++;
        s2++;
        d--;
    }
*/