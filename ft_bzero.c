/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valerio <valerio@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 20:09:29 by valerio           #+#    #+#             */
/*   Updated: 2024/02/24 21:33:28 by valerio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_bzero(void *s, size_t n)
{
    char    *str;
    size_t     i;

    str = (char *) s;
    i = 0;
    while (i < n)
        str[i++] = '\0';
    s = str;
}