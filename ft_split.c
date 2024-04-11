/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdessena <vdessena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 11:38:17 by vdessena          #+#    #+#             */
/*   Updated: 2024/03/11 16:43:16 by vdessena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
