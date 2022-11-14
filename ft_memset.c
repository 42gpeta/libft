/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpeta <gpeta@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 16:48:40 by gpeta             #+#    #+#             */
/*   Updated: 2022/11/14 15:12:47 by gpeta            ###   ########.fr       */
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

	printf("Man avant: %s\n",test1);
	printf("Moi avant: %s\n", test);
	
	memset(test1, 'k', sizeof(char) * 7);
	ft_memset(test, 'k', sizeof(char) * 7);

	printf("Man apres: %s\n",test1);
	printf("Moi apres: %s\n", test);

	return 0;
}