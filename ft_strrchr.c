/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valerio <valerio@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 00:02:24 by valerio           #+#    #+#             */
/*   Updated: 2024/02/25 20:05:58 by valerio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
    char    *pt;
    
    pt = ((char  *) s) + ft_strlen(s);
    while (*pt != c && pt != s)
        pt--;
    if (pt == s && c != *s)
        return ('\0');
    return (pt);
}