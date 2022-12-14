/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpeta <gpeta@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 18:19:35 by gpeta             #+#    #+#             */
/*   Updated: 2022/12/14 11:20:29 by gpeta            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// a verifier

#include "libft.h"

int		f_intlen(int n);

char	*ft_spe_case(int i)
{
	if (i == 0)
		return (ft_strdup("0"));
	return (ft_strdup("-2147483648"));
}

char	*ft_itoa(int n)
{
	int		len;
	char	*tab_itoa;

	if (n == 0 || n == -2147483648)
		return (ft_spe_case(n));
	len = f_intlen(n);
	tab_itoa = malloc(sizeof(char) * (len + 1));
	if (!tab_itoa)
		return (NULL);
	if (n < 0)
	{
		n *= -1;
		tab_itoa[0] = '-';
	}
	tab_itoa[len] = '\0';
	len--;
	while (n > 0)
	{
		tab_itoa[len] = n % 10 + '0';
		n /= 10;
		len--;
	}
	return (tab_itoa);
}

int	f_intlen(int n)
{
	int	i;

	if (n == 0)
		return (1);
	i = 0;
	if (n < 0)
	{
		n *= -1;
		i++;
	}
	while (n > 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

/* int	main(void)
{
	int	testint = 0;
//	char	teststr[] = "156489";

	// *** TEST F_INTLEN ***
//	printf("__main (f_intlen) : %d\n", f_intlen(testint));

	// *** TEST ft_strrev ***
//	printf("__main (ft_strrev) : %s\n", ft_strrev(teststr));

	// *** TEST ITOA ***
	printf("__main (ft_itoa) : %s\n", ft_itoa(testint));
//	ft_itoa(testint);

	return (0);
} */