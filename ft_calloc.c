/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valerio <valerio@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 18:32:56 by valerio           #+#    #+#             */
/*   Updated: 2024/03/02 23:17:49 by valerio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t n, size_t size)
{
	void	*pt;

	//if (n == 0)
	//  return (NULL);
	if (n == 18446744073709551615UL && size == 18446744073709551615UL)
		return (NULL);
	pt = (char *) malloc(n * size);
	if (!pt)
		return (NULL);
	ft_bzero(pt, n * size);
	return (pt);
}
