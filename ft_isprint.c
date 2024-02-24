/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdessena <vdessena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 16:19:02 by vdessena          #+#    #+#             */
/*   Updated: 2024/02/22 16:21:35 by vdessena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isprint(int  c)
{
    if (c >= 32 && c <= 126)
        return (1);
    else
        return (0);
}