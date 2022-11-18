/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpeta <gpeta@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 18:05:39 by gpeta             #+#    #+#             */
/*   Updated: 2022/11/18 20:00:09 by gpeta            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 127)
		return (1);
	else
		return (0);
}

/* int	main(int argc, char argv[])
{
	char	testMAN=145;
	char	testMOI=145;

	isprint(testMAN);
	printf("*** MAN ***\nresult = %d\nvaleur dec = %d\nexa = %x\nchar = %c\n\n", isprint(testMAN), testMAN, testMAN, testMAN);
	ft_isprint(testMOI);
	printf("*** MOI ***\nresult = %d\nvaleur dec = %d\nexa = %x\nchar = %c\n", ft_isprint(testMOI), testMOI, testMOI, testMOI);

	return (0);
} */