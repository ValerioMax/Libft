/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdessena <vdessena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 20:57:07 by vdessena          #+#    #+#             */
/*   Updated: 2024/03/11 16:48:58 by vdessena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	char_instr(char c, const char *set)
{
	size_t	i;

	i = 0;
	while (set[i])
		if (c == set[i++])
			return (1);
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	start;
	size_t	end;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	while (char_instr(s1[start], set))
		start++;
	end = ft_strlen(s1) - 1;
	if (start > end)
		return (ft_strdup(""));
	while (char_instr(s1[end], set))
		end--;
	str = ft_substr(s1, start, end - start + 1);
	return (str);
}
