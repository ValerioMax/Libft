/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valerio <valerio@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 18:08:02 by valerio           #+#    #+#             */
/*   Updated: 2024/02/28 19:09:47 by valerio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstadd_back(t_list **lst, t_list *new)
{
    if (!lst || !new)
        return ;
    else if (!((*lst)->next))
        (*lst)->next = new;
    else
        ft_lstadd_back(&(*lst)->next, new);
}