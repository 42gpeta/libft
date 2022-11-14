/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpeta <gpeta@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 13:55:49 by gpeta             #+#    #+#             */
/*   Updated: 2022/11/14 15:12:41 by gpeta            ###   ########.fr       */
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

    printf("man avant: %s\n",test);
    printf("moi avant: %s\n",test1);
	
	bzero(test, 7);
    ft_bzero(test1, 7);
    
printf("man apres	: %s\n",test);
printf("moi apres	: %s\n",test1);

    return 0;
}

