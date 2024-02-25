/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valerio <valerio@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 23:07:33 by valerio           #+#    #+#             */
/*   Updated: 2024/02/25 16:10:03 by valerio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t  ft_strlcat(char *dst, const char *src, size_t dstsize)
{
    size_t  len_src;
    size_t  len_dst;
    size_t  i;
    size_t  j;
    
    len_src = ft_strlen((char *) src);
    if (dstsize == 0)
        return (len_src);       
    len_dst = ft_strlen(dst);
    i = len_dst;
    j = 0;
    while (i < dstsize - 1 && j < len_src)
    {
        dst[i] = src[j];
        i++;
        j++;
    }
    dst[i] = '\0';
    if (dstsize < len_dst)
        return (dstsize + len_src);
    return (len_dst + len_src);
}