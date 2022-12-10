/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpeta <gpeta@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 17:20:48 by gpeta             #+#    #+#             */
/*   Updated: 2022/12/10 15:54:58 by gpeta            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	i;
	int	sign;
	int	res;

	i = 0;
	sign = 1;
	res = 0;
	while (nptr[i] == 32 || (nptr[i] >= 9 && nptr[i] <= 13)) // whitespace
		i++;
	while (nptr[i] == '+' || nptr[i] == '-') // gestion d'1 seul signe
	{
		if (nptr[i + 1] == '+' || nptr[i + 1] == '-')
			return (0);
		if (nptr[i] == '-')
			sign = -1;
		i++;
	}
	while (nptr[i] != '\0' && nptr[i] != ' ' && nptr[i] != '\t')
	{
		res = res * 10 + nptr[i] - '0';
		i++;
	}
	return (res * sign);
}

/* int	main ()
{
	char MAN[]= "   -10";
	char MOI[]= "   -10";
	int resMAN;
	int resMOI;

	resMAN = atoi(MAN);
	resMOI = ft_atoi(MOI);

	printf("MAN = %d\n", resMAN);
	printf("MOI = %d\n", resMOI);

	return (0);

} */