/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valerio <valerio@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 19:12:02 by valerio           #+#    #+#             */
/*   Updated: 2024/02/25 20:00:54 by valerio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
    size_t  i;
    char    *sub;
    
    if (start >= len)
    {
        sub = (char *) malloc(sizeof(char));
        sub[0] = '\0';
        return (sub);
    }
    if (len < (size_t) ft_strlen(s))
        sub = (char *) malloc((len + 1) * sizeof(char));
    else
        sub = (char *) malloc((ft_strlen(s) + 1 - start) * sizeof(char));
    if (!sub || !s)
        return (NULL);
    i = -1;
    while (++i < len && s[i + start])
        sub[i] = s[i + start];
    sub[i] = '\0';
    return (sub);
}