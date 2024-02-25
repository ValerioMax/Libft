/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valerio <valerio@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 11:48:46 by valerio           #+#    #+#             */
/*   Updated: 2024/02/25 14:27:34 by valerio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    size_t  i;

    i = 0;
    if (n == 0)
        return (0);
    while (i < n - 1 && s1 && s2 && *s1 == *s2)
    {
        s1++;
        s2++;
        i++;
    }
    return ((unsigned char) *s1 - (unsigned char) *s2);
}