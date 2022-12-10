/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpeta <gpeta@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 15:38:47 by gpeta             #+#    #+#             */
/*   Updated: 2022/12/10 23:30:23 by gpeta            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
	{
		c += 32;
		return (c);
	}
	else
		return (c);
}

// int	main(void)
// {
// 	char	testMAN = '\t';
// 	char	testMOI = '\t';

// 	printf("*** MAN ***\navant : %d | %c\napres : %d | %c\n\n", testMAN, testMAN, tolower(testMAN), tolower(testMAN));
// 	printf("*** MOI ***\navant : %d | %c\napres : %d | %c\n\n", testMOI, testMOI, ft_tolower(testMOI), ft_tolower(testMOI));

// 	return (0);
// }