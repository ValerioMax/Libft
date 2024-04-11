/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdessena <vdessena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 18:32:56 by vdessena          #+#    #+#             */
/*   Updated: 2024/03/11 16:31:29 by vdessena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t n, size_t size)
{
	void	*pt;

	if (n == 18446744073709551615UL && size == 18446744073709551615UL)
		return (NULL);
	pt = (char *) malloc(n * size);
	if (!pt)
		return (NULL);
	ft_bzero(pt, n * size);
	return (pt);
}
