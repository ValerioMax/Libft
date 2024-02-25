/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valerio <valerio@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 18:32:56 by valerio           #+#    #+#             */
/*   Updated: 2024/02/25 18:52:23 by valerio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_calloc(size_t n, size_t size)
{
    char    *pt;

    if (n == 0)
        return (NULL);
    pt = (char  *) malloc(n * size);
    if (!pt)
		return (0);
    ft_bzero(pt, n * size);
	return (pt);
}