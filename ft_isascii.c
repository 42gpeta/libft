/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpeta <gpeta@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 17:23:20 by gpeta             #+#    #+#             */
/*   Updated: 2022/12/11 18:33:42 by gpeta            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}

/* int	main(int argc, char argv[])
{
	char	test=127;

	ft_isascii(test);
	printf("result = %d\nvaleur dec = %d\nexa = %x", ft_isascii(test), test, test);

	return (0);
} */