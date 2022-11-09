/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpeta <gpeta@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 15:38:47 by gpeta             #+#    #+#             */
/*   Updated: 2022/11/08 16:13:32 by gpeta            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
	{
        c -= 32;

		return (c);
	}
}

int	main()
{
	char	test = 'E';
	char	test2 = 'e';

	printf("begin = %d | %c\nend = %d | %c ; reel = %d| num %c\n", test, test, ft_toupper(test), test2, test2, test2);

	return (0);
}