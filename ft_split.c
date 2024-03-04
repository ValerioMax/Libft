/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valerio <valerio@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 11:38:17 by valerio           #+#    #+#             */
/*   Updated: 2024/03/04 20:12:54 by valerio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
static int  ft_count_str(char const *s, char c)
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

static void    ft_aux1(char*** strs, const char *s, char c)
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
        (*strs)[num] = (char   *) malloc((len + 1) * sizeof(char));
        if (!(*strs)[num])
            free((*strs)[num]);
        num++;
    }
}

static void    ft_aux2(char*** strs, const char *s, char c)
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
            (*strs)[num][len++] = s[i++];
        (*strs)[num++][len] = '\0';
    }
    (*strs)[num] = NULL;
}

char **ft_split(char const *s, char c)
{
    char    **strs;
    
    strs = (char    **) malloc((ft_count_str(s, c) + 1) * sizeof(char    *));
    if (!strs)
        return (NULL);
    ft_aux1(&strs, s, c);
    ft_aux2(&strs, s, c);
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

//v2
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

*/

//v3
static int	ft_next_len(char const *str, char sep, int i)
{
	int	len;

	len = 0;
	while (str[i] && str[i++] != sep)
		len++;
	return (len);
}

static int	ft_count_str(char const *s, char c)
{
	int	num;
	int	i;

	i = 0;
	num = 0;
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		if (s[i] == '\0')
			break ;
		while (s[i] != c && s[i])
			i++;
		num++;
	}
	return (num);
}

static void	ft_assign(char *s, char const *str, int len, int *i)
{
	int	k;

	k = 0;
	while (k < len)
		s[k++] = str[(*i)++];
	s[k] = '\0';
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	char	**strs;
	int		len;

	strs = (char **) malloc(sizeof(char *) * (ft_count_str(s, c) + 1));
	if (!strs)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] == '\0')
			break ;
		len = ft_next_len(s, c, i);
		strs[j] = (char *) malloc(sizeof(char) * len + 1);
		if (!strs[j])
			return (NULL);
		ft_assign(strs[j++], s, len, &i);
	}
	strs[j] = NULL;
	return (strs);
}
