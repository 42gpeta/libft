/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpeta <gpeta@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 16:48:40 by gpeta             #+#    #+#             */
/*   Updated: 2022/12/09 18:20:42 by gpeta            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)s)[i] = (unsigned char)c;
		i++;
	}
	return (s);
}

/* int	main()
{
	char	testMAN[]= "bonjour";
	char	testMOI[]= "bonjour";

	printf("MAN avant: %s\n",testMAN);
	printf("MOI avant: %s\n", testMOI);

	memset(testMAN, 'k', sizeof(char) * 5);
	ft_memset(testMOI, 'k', sizeof(char) * 5);

	printf("MAN apres: %s\n",testMAN);
	printf("MOI apres: %s\n", testMOI);
	
	return (0);
} */
