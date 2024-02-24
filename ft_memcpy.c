/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valerio <valerio@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 20:26:30 by valerio           #+#    #+#             */
/*   Updated: 2024/02/24 22:00:24 by valerio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memcpy(void *dest, const void *src, size_t n)
{
    if (!dest || (!dest && !src) || n == 0)
        return (dest);
    while (n--)
        ((char *) dest)[n] = ((char *) src)[n];
    return (dest);
}