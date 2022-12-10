/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpeta <gpeta@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 17:44:37 by gpeta             #+#    #+#             */
/*   Updated: 2022/12/10 15:58:03 by gpeta            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	nwtab_len;
	void	*nwtab;

	if (nmemb == 0 || size == 0)
		return (malloc(0));
	nwtab_len = nmemb * size;
	nwtab = (void *)malloc(nwtab_len * sizeof(nwtab));
	if (!nwtab || nwtab_len == 0)
		return (NULL);
	ft_memset(nwtab, '\0', nwtab_len);
	return (nwtab);
}

/* int main(int ac, char **av)
{
	int test[7] = {1, 2 , 3 ,4 , 5 ,6 , 7};
	//char test[] = "bonjour";
	int	nb;
	int	i;
	int	*array; 
	int	*array2; 
	//char	*array; 
	//char	*array2; 

	nb = 7;
	array = test;
	array2 = test;

		printf("*** MAN avant ***\n");	// changer les % c en % d
	for (i = 0; i < nb ; i++)
		printf("array[%d] : %d\n", i, array[i]);

		printf("\n*************\n");

		printf("*** MOI avant ***\n");
	for (i = 0; i < nb ; i++)
		printf("array[%d] : %d\n", i, array[i]);

		printf("\n****************\n");

	array = calloc(nb, sizeof(int));
	array2 = ft_calloc(nb, sizeof(int));

		printf("*** MAN apres***\n");
	for (i = 0; i < nb ; i++)
		printf("array[%d] : %d\n", i, array[i]);

		printf("\n*************\n");

		printf("*** MOI apres***\n");
	for (i = 0; i < nb ; i++)
		printf("array2[%d] : %d\n", i, array2[i]);

		return (0);
} */