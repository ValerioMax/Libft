/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valerio <valerio@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 11:38:17 by valerio           #+#    #+#             */
/*   Updated: 2024/02/28 14:40:39 by valerio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


static int  conta_str(char const *s, char c)
{
    int num;
    size_t i;
    
    i = 0;
    num = 0;
    while (s[i])
    {
        while (s[i] == c && s[i])
            i++;
        if (s[i] == '\0')
            break;
        while (s[i] != c && s[i])
            i++;
        num++;
    }
    return (num);
}

static void    aux1(char** strs, const char *s, char c)
{
    int     num;
    size_t i;
    size_t len;

    num = 0;
    len = 0;
    i = 0;
    while (s[i])
    {
        while (s[i] == c && s[i])
            i++;
        if (s[i] == '\0')
            break;
        len = 0;
        while (s[i] != c && s[i++])
            len++;
        strs[num++] = (char   *) malloc((len + 1) * sizeof(char));
    }
}

static void    aux2(char** strs, const char *s, char c)
{
    int     num;
    size_t i;
    size_t len;

    num = 0;
    len = 0;
    i = 0;
    while (s[i])
    {
        while (s[i] == c && s[i])
            i++;
        if (s[i] == '\0')
            break;
        len = 0;
        while (s[i] != c && s[i])
            strs[num][len++] = s[i++];
        strs[num++][len] = '\0';
    }
    strs[num] = NULL;
}

char **ft_split(char const *s, char c)
{
    char    **strs;
    int     num;
    
    num = conta_str(s, c);
    strs = (char    **) malloc(num * sizeof(char    *) + sizeof(NULL));
    if (!strs)
        return (NULL);
    aux1(strs, s, c);
    aux2(strs, s, c);
    return (strs);
}