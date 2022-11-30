/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpeta <gpeta@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 19:22:35 by gpeta             #+#    #+#             */
/*   Updated: 2022/11/24 17:22:55 by gpeta            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	j = 0;
	i = 0;
	if (little[0] == '\0')	// si little est vide
		return ((char *)big);
	else if (len == 0)		// si len = 0
		return (NULL);
	
	while (big[i] != '\0' && i < len)
	{
		j = 0;
		while ((i + j < len) && (big[i + j] == little[j]) && little[j])
		{
			j++;
			if (little[j] == '\0')
				return ((char *)(&big[i]));    // il faut trouver tout little !
		}
		i++;
	}
	return (NULL);
}

int	main(int ac, char **av)
{
	char	little[]="";
	char	big[]="Foo Bar Baz";
	size_t avav;
	
	avav = 7;

 	if (strnstr(big, little, avav) == NULL)
		printf("*** MAN ***\ncest null\n");
	else
		printf("*** MAN ***\n%s\n", strnstr(big, little, avav)); 

	printf("\n*****************************\n\n");

 	if (ft_strnstr(big, little, avav) == NULL)
		printf("*** MOI ***\ncest null\n");
	else
		printf("*** MOI ***\n%s\n\n", ft_strnstr(big, little, avav)); 


	return (0);

}
