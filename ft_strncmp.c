/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpeta <gpeta@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 19:27:23 by gpeta             #+#    #+#             */
/*   Updated: 2022/11/14 19:47:54 by gpeta            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <unistd.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t i;
	signed int	res;

	i = 0;
	res = 0;

	while (i < n)
	{
		if (s1[i] < s2[i])
		{
			res = s1[i] - s2[i]; 
			return (res);
		}	
		else if (s1[i] > s2[i])
		{
			res = s1[i] - s2[i]; 
			return (res);		
		}
		i++;
	}
	return (res);
}

int	main()
{
	char	testMAN_1[]= "bonkour";
	char	testMAN_2[]= "bonjour";
	int		resMAN;
	char	testMOI_1[]= "bonkour";
	char	testMOI_2[]= "bonjour";
	int		resMOI;

	resMAN = strncmp(testMAN_1, testMAN_2, 3);
	resMOI = ft_strncmp(testMOI_1,	testMOI_2, 3);

	printf("MAN = %d\n", resMAN);
	printf("MOI = %d\n", resMOI);

	return (0);
}