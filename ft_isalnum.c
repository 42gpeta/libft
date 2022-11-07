/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpeta <gpeta@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 15:14:39 by gpeta             #+#    #+#             */
/*   Updated: 2022/11/07 17:17:54 by gpeta            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_isalnum(int c)
{
	if ((c >= 48 && c <= 57) || (c >= 65 && c <= 90) || (c >= 97 && c <= 122))
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

	ft_isalnum(test);
	printf("result = %d\nvaleur dec = %d", ft_isalnum(test), test);

	return (0);
}