/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpeta <gpeta@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 17:10:51 by gpeta             #+#    #+#             */
/*   Updated: 2022/11/14 20:25:41 by gpeta            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <unistd.h>

void *ft_memchr(const void *s, int c, size_t n)
{
	int		i;
	char	*ps;

	i = 0;
	ps = (unsigned char *)s; // on cast car il y a un void * en argument
	while (i < n)
	{
		if (*ps == c)
			return (ps); // on renvoi la premiere coccurence
		i++;
		ps++;
	}
	return (NULL);
}

int main()
{
	char test[] = "bonjour@test.fr";
	////char test2[] = {'a','b','c','d','e','f'};
	char test2[] = "bonjour@test2.fr";

	char *ptest = memchr(test, 'o', strlen(test));
	char *ptest2 = ft_memchr(test2, 'o', strlen(test2));

	printf("MAN  = %s\n", ptest);

	printf("MOI  = %s\n", ptest2);

	return 0;
}