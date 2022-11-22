/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpeta <gpeta@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 19:25:40 by gpeta             #+#    #+#             */
/*   Updated: 2022/11/22 15:03:17 by gpeta            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// a faire

/*

    concatener les deux chaine de caracteres (dst + src)

*/

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	len_src;
	size_t	len_dst;

	i = 0;
	len_src = ft_strlen(src);
	len_dst = ft_strlen(dst);
	
	if (size <= len_dst || size == 0)
		return (len_src + size);
	
	while (src[i] && len_dst + i < size - 1)
	{
		dst[len_dst + i] = src[i];
		i++;
	}
	dst[len_dst + i] = '\0';
	printf("%s\n", dst); // a supprimer
	return (len_src + len_dst);

}

/* int	main(int ac, char **av)
{
//	char dst[]="bon";
//	char src[]="jour";
//	char dst[]= av[1];
//	char src[]= av[2];
	size_t size;
	size_t res;

	//res = ft_strlcat(dst, src, 6);
	size = (size_t)av[3];
	res = ft_strlcat(av[1], av[2], size);

	printf("res = %ld\n", res);
	//printf("dst[%s]\n", dst);
	
	return (0);
} */