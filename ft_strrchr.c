/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpeta <gpeta@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 18:00:30 by gpeta             #+#    #+#             */
/*   Updated: 2022/11/14 19:26:45 by gpeta            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>
#include <string.h>
#include <unistd.h>

int	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (*s)
	{
		s++;
		i++;
	}
	return (i);
}

char	*ft_strrchr(const char *s, int c)
{
	int	len;
	int	i;

	len = ft_strlen(s);
	while (len-- > 0)
	{
		if (s[len] == c)
			return ((char *)&s[len]); // on pointe sur l'adresse de la dernierre occurence 
	}

	return (NULL);
}

int	main ()
{
	char	strMAN[] = "bonjour@42.fr";
	char	strMOI[] = "bonjour@42.fr";

	printf("---------  MAN  ----------- \n");
	printf("avant : %s\n", strMAN);
	printf("apres : %s\n",strrchr(strMAN, 'o'));
	
	printf("\n---------  MOI  ----------- \n");
	printf("avant : %s\n", strMOI);
	printf("apres : %s\n", ft_strrchr(strMOI, 'o'));

	return 0;
}