/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpeta <gpeta@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 15:03:32 by gpeta             #+#    #+#             */
/*   Updated: 2022/12/11 18:33:45 by gpeta            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}

/* int	main(int argc, char argv[])
{
	char	test='q';

	ft_isdigit(test);
	printf("result = %d\nvaleur dec = %d", ft_isdigit(test), test);

	return (0);
} */