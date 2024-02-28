/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valerio <valerio@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 19:07:23 by valerio           #+#    #+#             */
/*   Updated: 2024/02/28 19:45:22 by valerio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
void ft_lstclear(t_list **lst, void (*del)(void*))
{
    if (!lst)
        return ;
    else if (!(*lst)->next)
    {
        del(*lst);
        free(*lst);
        lst = NULL;
    }
    else
    {
        ft_lstclear(&(*lst)->next, del);
        del(*lst);
        free(*lst);
    }    
}
*/
void ft_lstclear(t_list **lst, void (*del)(void*))
{
    t_list  *temp;
    t_list  *temp2;
    
    temp = *lst;
    while (temp)
    {
        temp2 = temp;
        del(temp);
        free(temp);
        temp = temp2->next;
    }
    free(*lst);
    free(lst);    
}