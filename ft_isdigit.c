/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdessena <vdessena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 16:08:04 by vdessena          #+#    #+#             */
/*   Updated: 2024/02/22 16:09:58 by vdessena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isdigit(int  c)
{
    if (c >= 48 && c <= 57)
        return (1);
    else
        return (0);
}