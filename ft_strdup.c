/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valerio <valerio@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 18:56:43 by valerio           #+#    #+#             */
/*   Updated: 2024/02/25 20:05:08 by valerio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strdup(const char *s)
{
    char    *pt;
    size_t  len;

    len = ft_strlen(s);
    pt = (char  *) malloc((len + 1) * sizeof(char));
    if (!pt)
        return (NULL);
    pt = ft_memcpy(pt, s, len + 1);
    return (pt);    
}