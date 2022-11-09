/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpeta <gpeta@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 16:48:40 by gpeta             #+#    #+#             */
/*   Updated: 2022/11/09 16:27:53 by gpeta            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <unistd.h>

void	*ft_memset(void *s, int c, size_t n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)s)[i] = (unsigned char)c;
		i++;
	}
	return (s);
}

int	main()
{
	char	test1[10];
	char	test [10];

	memset(test1, 'k', sizeof(char) * 7);
	ft_memset(test, 'k', sizeof(char) * 6);

	printf("Reel : %s",test1) ;
	printf("\n");
	printf("Me : %s", test);

	return 0;
}
