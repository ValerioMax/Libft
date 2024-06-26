/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdessena <vdessena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 16:10:42 by vdessena          #+#    #+#             */
/*   Updated: 2024/03/11 16:41:01 by vdessena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char	*s)
{
	int		sign;
	long	ris;

	sign = 1;
	ris = 0;
	while (*s == '\f' || *s == '\n' || *s == '\r' || *s == '\t'
		|| *s == '\v' || *s == ' ')
		s++;
	if (*s == '+' || *s == '-')
	{
		if (*(s + 1) == '+' || *(s + 1) == '-')
			return (ris);
		if (*s == '-')
			sign = -1;
		s++;
	}
	while (*s >= '0' && *s <= '9')
	{
		ris = ris * 10 + *s - '0';
		s++;
	}
	return ((int)ris * sign);
}
