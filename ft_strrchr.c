/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpeta <gpeta@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 18:00:30 by gpeta             #+#    #+#             */
/*   Updated: 2022/12/10 23:35:48 by gpeta            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	len;

	len = ft_strlen(s);
	while (len-- > 0)
	{
		if (s[len] == c)
			return ((char *)&s[len]);
			// on pointe sur l'adresse de la dernierre occurence 
	}
	return (NULL);
}

/* int	main ()
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
} */