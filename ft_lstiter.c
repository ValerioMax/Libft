/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valerio <valerio@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 19:22:59 by valerio           #+#    #+#             */
/*   Updated: 2024/02/28 19:36:20 by valerio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstiter(t_list *lst, void (*f)(void *))
{
    if (!lst)
        return ;
    else if (lst->next == NULL)
        f(lst);
    else
    {
        ft_lstiter(lst->next, f);
        f(lst);
    }
        
}