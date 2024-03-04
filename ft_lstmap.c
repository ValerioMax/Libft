/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valerio <valerio@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 19:28:29 by valerio           #+#    #+#             */
/*   Updated: 2024/03/02 22:17:25 by valerio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*node;

	if (!lst || !f || !del)
		return (NULL);
	new = ft_lstnew(f(lst->content));
	if (!new)
	{
		ft_lstclear(&new, del);
		return (NULL);
	}
	node = new;
	while (lst->next)
	{
		node->next = ft_lstnew(f(lst->next->content));
		if (!node->next)
		{
			ft_lstclear(&node, del);
			return (NULL);
		}
		node = node->next;
		lst = lst->next;
	}
	return (new);
}

/*
t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    if (!lst || !f || !del)
        return (NULL);
    if (!lst->next)
    {
        f(lst->content);
        return (ft_lstnew(lst->content));
    }
    else
    {
        f(lst->content);
        return (ft_lstnew(lst->content))
    }
}
*/
