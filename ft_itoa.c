/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpeta <gpeta@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 18:19:35 by gpeta             #+#    #+#             */
/*   Updated: 2022/12/09 14:25:29 by gpeta            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// a verifier

#include "libft.h"

int		f_intlen(int n);
char	*ft_strrev(char *str);

char	*ft_itoa(int n)
{
	int	i;
	int	len;
	char	*tab_itoa;

	len = f_intlen(n);
	printf("__ft_itoa len = %d\n\n", len); // a supprimer

	tab_itoa = malloc((len + 1) * (*tab_itoa));
	if (!tab_itoa)
		return (NULL);
	
	i = 0;
	if (n < 0)
		n *= -1;
	while (n > 0)
	{
		tab_itoa[i++] = n % 10 + '0';
		n /= 10;
	}
	tab_itoa[i] = '-';
	tab_itoa[i + 1] = '\0';
	printf("__ft_itoa\n");  // a supprimer
	for (i = 0; tab_itoa[i] != '\0'; i++)  // a supprimer
		printf("tab[%d] = %c\n", i , tab_itoa[i]);  // a supprimer
	ft_strrev(tab_itoa);
	printf("\n%s\n(str apres rev)\n", tab_itoa); // a supprimer
	
	return (tab_itoa);

}

int		f_intlen(int n)
{
	int	i;

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

char	*ft_strrev(char *str)
{
	int	i;
	int	len;
	int	tmp;

	i = 0;
	len = ft_strlen(str);
	while (i < len / 2)
	{
		tmp = str[i];
		str[i] = str[len - i - 1];
		str[len - i - 1] = tmp;
		i++;
	}
	return (str);
}


int	main(int ac, char **av)
{
	int	testint = -15648658;
	char	teststr[] = "156489";

////	*** TEST F_INTLEN ***
//	printf("__main (f_intlen) : %d\n", f_intlen(testint));

////	*** TEST ft_strrev***
//	printf("__main (ft_strrev) : %s\n", ft_strrev(teststr));

////	*** TEST ITOA ***
//	printf("__main (ft_itoa) : %s\n", ft_itoa(test));
	ft_itoa(testint);
	
	
	return (0);
}