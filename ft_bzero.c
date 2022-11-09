/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpeta <gpeta@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 13:55:49 by gpeta             #+#    #+#             */
/*   Updated: 2022/11/09 15:47:13 by gpeta            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <strings.h>
#include <unistd.h>


int	ft_strlen(char *str)
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

void	ft_bzero(void *s, size_t n)
{
	int	i;

    i = 0;
	while (i < n)
	{
		((unsigned char *)s)[i] = 0;
		i++;
	}
}

int main()
{
    char    test[] = "bonjour";
    char    test1[] = "bonjour";

    bzero(test, 7);
    ft_bzero(test1, 7);
    
    printf("Reel: %s\n",test);
    printf("Reel: %s",test1);

    return 0;
}

