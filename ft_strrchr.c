/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpeta <gpeta@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 18:00:30 by gpeta             #+#    #+#             */
/*   Updated: 2022/11/08 18:33:59 by gpeta            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char *strrchr(const char *s, int c)
{
    int len;
    char    test[];

    len = ft_strlen(*s);
    while (len > 0)
    {
        s + len = test
        if (s + len == c)
        {
            return 
        }
    }
}


int    ft_strlen(char *str)
{
    int i;

    i = 0;
    while (*str)
    {
        str++;
        i++;
    }

    return (i);
}