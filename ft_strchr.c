/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdessena <vdessena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 23:57:44 by vdessena          #+#    #+#             */
/*   Updated: 2024/03/11 16:48:36 by vdessena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;
	char	*str;

	str = (char *)s;
	i = -1;
	while (str[++i])
		if (str[i] == (unsigned char) c)
			return (str + i);
	if (str[i] == (unsigned char) c)
		return (str + i);
	return (NULL);
}
