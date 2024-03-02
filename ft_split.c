/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valerio <valerio@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 11:38:17 by valerio           #+#    #+#             */
/*   Updated: 2024/03/02 19:15:02 by valerio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
static int  count_str(char const *s, char c)
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
        strs[num] = (char   *) malloc((len + 1) * sizeof(char));
        if (!strs[num])
            free(strs[num]);
        num++;
    }
   // strs[num] = (char   *) malloc(sizeof(char*));
}

static void    aux2(char** strs, const char *s, char c)
{
    int     num;
    size_t i;
    size_t len;

    num = 0;
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
    
    strs = (char    **) malloc((count_str(s, c) + 1) * sizeof(char    *));
    if (!strs)
        return (NULL);
    aux1(strs, s, c);
    aux2(strs, s, c);
    return (strs);
}

#include <stdio.h>

int main()
{
    int i = 0;
    char s[] = "lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse";
    int count = conta_str(s, ' ');
    char **ss = ft_split(s, ' ');
    printf("%d\n", count);
    printf("INIZIO\n");
    while (i < count)
    {
        printf("%s\n", ss[i++]);
    }
    printf("%p\n", ss[i++]);
    printf("FINE\n");
    return 0;
}
*/

static int	ft_count_words(char const *str, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		while (str[i] == c)
			i++;
		if (str[i])
		{
			count++;
			while (str[i] != c && str[i])
				i++;
		}
	}
	return (count);
}

static void	ft_aux(size_t *i)
{
	i[0] = 0;
	i[1] = 0;
	i[2] = -1;
}

char	**ft_split(char const *s, char c)
{
	size_t	i[3];
	char	**split;

	if (!s)
		return (NULL);
	split = (char **)malloc((ft_count_words(s, c) + 1) * sizeof(char *));
	if (!split)
		return (NULL);
	ft_aux(i);
	while (s[i[0]])
	{
		while (s[i[0]] == c)
			++i[0];
		if (s[i[0]])
		{
			i[1] = i[0];
			while (s[i[0]] != c && s[i[0]])
				(i[0])++;
			split[++(i[2])] = ft_substr(s, i[1], i[0] - i[1]);
			if (!split[i[2]])
				free(split[i[2]]);
		}
	}
	split[++(i[2])] = NULL;
	return (split);
}