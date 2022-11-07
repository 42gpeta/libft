/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpeta <gpeta@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 15:03:32 by gpeta             #+#    #+#             */
/*   Updated: 2022/11/07 17:20:38 by gpeta            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
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
	char	test='q';

	ft_isdigit(test);
	printf("result = %d\nvaleur dec = %d", ft_isdigit(test), test);

	return (0);
}