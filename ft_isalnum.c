/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpeta <gpeta@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 15:14:39 by gpeta             #+#    #+#             */
/*   Updated: 2022/12/11 18:33:39 by gpeta            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 48 && c <= 57) || (c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}

// int	main(int argc, char argv[])
// {
// 	char	testMAN='\t';
// 	char	testMOI='\t';

// 	isalnum(testMAN);
// 	printf("*** MAN ***\nresult = %d\nvaleur dec = %d\n\n", ft_isalnum(testMAN), testMAN);

// 	ft_isalnum(testMOI);
// 	printf("*** MOI ***\nresult = %d\nvaleur dec = %d\n", ft_isalnum(testMOI), testMOI);

// 	return (0);
// }