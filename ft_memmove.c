/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valerio <valerio@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 20:28:48 by valerio           #+#    #+#             */
/*   Updated: 2024/02/24 22:10:37 by valerio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//modo1
/*
void    *ft_memmove(void *dest, const void *src, size_t n)
{
    char    temp[n];
    char    temp_dest[n];
    size_t      i;

    i = 0;
    while (i < n)
        temp[i] = ((char   *) src)[i++];
    i = 0;
    while (i < n)
        temp_dest[i] = temp[i++];
    dest = temp_dest;
    return (dest);
}
*/
//modo2
void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t  i;

	if ((!dest && !src) || n == 0)
		return (dest);
	if (src < dest)
	{
		while (n--)
			((char *) dest)[n] = ((char *) src)[n];
	}
	else
	{
		i = 0;
		while (i < n)
		{
			((char *) dest)[i] = ((char *) src)[i];
			i++;
		}
	}
	return (dest);
}
