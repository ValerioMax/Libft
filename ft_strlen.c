/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdessena <vdessena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 16:22:05 by vdessena          #+#    #+#             */
/*   Updated: 2024/02/22 17:59:38 by vdessena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strlen(char  *s)
{
    int len;

    len = 0;
    while (s[len] != '\0')
        len++;
    return (len);
}