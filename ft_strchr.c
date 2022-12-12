/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpeta <gpeta@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 15:31:59 by gpeta             #+#    #+#             */
/*   Updated: 2022/12/12 15:36:55 by gpeta            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return ((char *)s);
			// on pointe sur la premiere occurence 
		s++;
	}
	if (c == '\0')
		return ((char *)s);
	return (NULL);
}

/* int	main ()
{
	char	strMAN[] = "bonjour@42.fr";
	char	strMOI[] = "bonjour@42.fr";

	printf("---------  MAN  ----------- \n");
	printf("avant : %s\n", strMAN);
	printf("apres : %s\n",strchr(strMAN, ' '));

 	printf("\n---------  MOI  ----------- \n");
	printf("avant : %s\n", strMOI);
	printf("apres : %s\n", ft_strchr(strMAN, ' '));

	return 0;
} */