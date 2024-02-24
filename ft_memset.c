/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valerio <valerio@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 16:27:28 by vdessena          #+#    #+#             */
/*   Updated: 2024/02/24 21:33:05 by valerio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memset(void *b, int c, size_t len)
{
    size_t     i;
    char    *str;

    char x = (unsigned char) c;
    str = (char *) b;
    i = 0;
    while (i < len)
        str[i++] = x;
    b = str;
    return (b);
}