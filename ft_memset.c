/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdessena <vdessena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 16:27:28 by vdessena          #+#    #+#             */
/*   Updated: 2024/02/22 18:07:37 by vdessena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

void *ft_memset(void *b, int c, size_t len)
{
    size_t     i;
    char    *str;

    char x = (unsigned char) c;
    str = (char *) b;
    i = 0;
    while (i < len)
        str[i++] = x;
    b = str;
    return (b);
}

int main()
{
    char *s = "ciao come va";
    char *s2 = (char*) ft_memset(s, 66, 6);
    printf("%c", s2[0]);
    //printf("%s", s);

    return 0;
}