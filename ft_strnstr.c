/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valerio <valerio@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 12:15:39 by valerio           #+#    #+#             */
/*   Updated: 2024/02/25 15:05:32 by valerio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strnstr(const char *big, const char *little, size_t len)
{
    size_t  j;
    size_t  little_len;
    
    if (*little == '\0')
        return ((char   *) big);
    little_len = ft_strlen((char    *) little);
    while (len >= little_len && *big != '\0')
    {
        j = 0;
        while (*(big + j) == *(little + j) && *(little + j) != '\0')
            j++;
        if (*(little + j) == '\0')
            return ((char   *) big);
        len--;
        big++;
    }
    return ('\0');
}