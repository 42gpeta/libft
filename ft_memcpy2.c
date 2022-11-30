/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpeta <gpeta@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 15:51:19 by gpeta             #+#    #+#             */
/*   Updated: 2022/11/28 20:28:37 by gpeta            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// ne fonctionne pas avec un n < au len du mot src

#include "libft.h"

/* void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	int	i;
	int	j;
	char	*pdest;
	char	*psrc;
	size_t	lsrc;

	pdest = (unsigned char *)dest;
	psrc = (unsigned char *)src;
	lsrc = ft_strlen(psrc);

	if (!psrc)
		return (0);
	i = 0;
	while (i < n)
	{
		pdest[i] = psrc[i];
		i++;
	}
	j = 0;
	while (psrc[lsrc - n - j] != '\0')
	{
		pdest[i] = psrc[lsrc - n - j];
		i++;
		j++;
	}
	pdest[i] = '\0';
/* 	while (psrc[i] != '\0')
	{
		pdest[i] = psrc[i];
		i++;
	}
	
	return (pdest);
} */


void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*pdest;
	char	*psrc;

	pdest = (unsigned char *)dest;
	psrc = (unsigned char *)src;

	if (!pdest && !psrc)
		return (0);

	i = 0;	
	while (i < n && psrc[i] != '\0')
	{
		pdest[i] = psrc[i];
		i++;
	}
	pdest[i] = '\0';
	return (pdest);
}


int	main()
{
	char	src[] = "BONJOUR";
	char	dest[] = "";
	char	*fdest = NULL;
	int	i;
	int size = 8;

	printf("----------MAN-----------\n");
	
	//printf("src : %s\ndest : %s\n\n", src, dest);
	fdest = memcpy(dest, src, size);
	printf("1* src apres : %s\n*** DEST apres : %s\n\n", src, fdest);

/* 	for (i = 0; i < strlen(fdest); i++)
		printf("dest[%d] : %c\n", i, fdest[i]); */

	char	src2[] = "BONJOUR";
	char	dest2[] = "";
	char	*fdest2 = NULL;
	
	
	printf("\n----------MOI-----------\n");

	//printf("src : %s\ndest : %s\n\n", src2, dest2);
	fdest2 = ft_memcpy(dest2, src2, size);
	printf("2* src apres : %s\n*** DEST apres : %s\n\n", src2, fdest2);

	return (0);
}