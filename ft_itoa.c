/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdessena <vdessena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 17:42:58 by vdessena          #+#    #+#             */
/*   Updated: 2024/03/11 16:31:46 by vdessena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_reverse(char *s)
{
	size_t	i;
	size_t	len;
	char	temp;

	len = ft_strlen((const char *) s);
	i = 0;
	while (i < len / 2)
	{
		temp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = temp;
		i++;
	}
	return (s);
}

static long	ft_numlen(long n, int len)
{
	if (n < 0)
		return (ft_numlen(n * -1, len + 1));
	else if (n < 10)
		return (len);
	else
		return (ft_numlen(n / 10, len + 1));
}

static char	*ft_aux(long int n, char *s, int i)
{
	if (n < 10)
	{
		s[i] = n + '0';
		return (s);
	}
	else
	{
		s[i] = n % 10 + '0';
		return (ft_aux(n / 10, s, i + 1));
	}
}

char	*ft_itoa(int n)
{
	char	*s;
	long	numlen;
	long	long_n;

	long_n = (long int) n;
	numlen = ft_numlen(long_n, 1);
	s = (char *) malloc((numlen + 1) * sizeof(char));
	if (!s)
		return (NULL);
	if (long_n < 0)
	{
		long_n *= -1;
		s[numlen - 1] = '-';
		s[numlen] = '\0';
		s = ft_reverse(ft_aux(long_n, s, 0));
		return (s);
	}
	s[numlen] = '\0';
	return (ft_reverse(ft_aux(long_n, s, 0)));
}
