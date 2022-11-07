/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpeta <gpeta@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 18:05:39 by gpeta             #+#    #+#             */
/*   Updated: 2022/11/07 18:08:56 by gpeta            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 127)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}

int	main(int argc, char argv[])
{
	char	test=127;

	ft_isprint(test);
	printf("result = %d\nvaleur dec = %d\nexa = %x", ft_isprint(test), test, test);

	return (0);
}