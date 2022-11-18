/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpeta <gpeta@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 12:39:15 by gpeta             #+#    #+#             */
/*   Updated: 2022/11/18 20:00:25 by gpeta            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (0);
	else
		return (1);
}

/* int	main(int argc, char *argv[])
{
	char	test='q';

	ft_isalpha(test);
	printf("result = %d\nvaleur dec = %d", ft_isalpha(test), test);

	return (0);
} */