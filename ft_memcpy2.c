/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpeta <gpeta@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 15:51:19 by gpeta             #+#    #+#             */
/*   Updated: 2022/11/10 19:09:42 by gpeta            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <unistd.h>

void	*ft_memcpy2(void *dest, const void *src, size_t n)
{
	int	i;
	char	*pdest;
	char	*psrc;

	pdest = (unsigned char *)dest;
	psrc = (unsigned char *)src;

	i = 0;
	while (i < n && (psrc)[i] != '\0')
	{
		pdest[i] = psrc[i];
		i++;
	}
	while (i < n)
	{
		pdest[i] = '\0';
		i++;
	}

	return (dest);
}

int	main()
{
	char	src[] = "bonjourou";
	char	dest[] = "hokhoki";
	char	src2[] = "bonjourou";
	char	dest2[] = "hokhoki";

	printf("----------MAN-----------\n");
	printf("src : %s\ndest : %s\n\n", src, dest);
	memcpy(dest, src, 5);
	//strncpy(dest, src, 5);
	printf("src apres : %s\ndest apres : %s", src, dest);
	
	printf("\n----------MOI-----------\n");

	printf("src : %s\ndest : %s\n\n", src2, dest2);
	ft_memcpy2(dest2, src2, 5);
	printf("src apres : %s\ndest apres : %s", src2, dest2);

	return (0);
}