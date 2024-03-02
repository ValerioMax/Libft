/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valerio <valerio@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 00:02:24 by valerio           #+#    #+#             */
/*   Updated: 2024/03/02 16:58:07 by valerio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*str;

	str = (char *)s;
	i = ft_strlen(str);
	if ((unsigned char)c == '\0')
		return (str + i);
	while (--i >= 0)
		if (str[i] == (unsigned char) c)
			return (str + i);
	return (NULL);
    /*
    char    *pt;
    
    pt = ((char  *) s) + ft_strlen(s);
    while (*pt != c && pt != s)
        pt--;
    if (pt == s && c != *s)
        return (NULL);
    return (pt);

    */
}
