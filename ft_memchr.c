/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valerio <valerio@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 12:03:19 by valerio           #+#    #+#             */
/*   Updated: 2024/02/25 15:52:51 by valerio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memchr(const void *s, int c, size_t n)
{
    size_t              i;
    unsigned char    *pt;

    pt = (unsigned char  *) s;
    i = 0;
    while (i < n)
    {
        if (*pt == (unsigned char) c)
            return (pt);
        pt++;
        i++;
    }
    return (NULL);
}