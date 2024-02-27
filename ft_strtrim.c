/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valerio <valerio@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 20:57:07 by valerio           #+#    #+#             */
/*   Updated: 2024/02/27 17:45:43 by valerio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int  char_instr(char c, const char* set)
{
    size_t  i;

    i = 0;
    while (set[i])
        if (c == set[i++])
            return (1);
    return (0);    
}

char *ft_strtrim(char const *s1, char const *set)
{
    char    *s;
    size_t  start;
    size_t  end;
    size_t  i;
    
    s = (char   *) malloc((ft_strlen(s1) + 1)* sizeof(char));
    if (!s)
        return (NULL);
    start = 0;
    i = 0;
    while (s1[i] && char_instr(s1[i++], set))
        start++;
    end = ft_strlen(s1) - 1;
    i = 0;
    while (end >= start && char_instr(s1[end], set))
        end--;
    
    return (ft_strdup(ft_memcpy(s, s1 + start, end - start + 1)));
}

//per qualche motivo non va il tester1
//con questo va ma penso bisogna risolvere la parte della memoria allocata in più
//idea: -> non fare il malloc, salvare tutto dentro s e poi farne una copia e fare s = malloc e poi s = strlcpy(s, copia)
/*

while (s1[start] && start <= end)
        s[i++] = s1[start++];
    s[i] = '\0';
    //while ((int)++k < ft_strlen(s1) + 1)
    //    free(s + k);
    return (s);
*/
