/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpeta <gpeta@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 19:25:40 by gpeta             #+#    #+#             */
/*   Updated: 2022/12/12 20:11:27 by gpeta            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// a faire

//    concatener les deux chaine de caracteres (dst + src)

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	len_src;
	size_t	len_dst;

	i = 0;
	len_src = ft_strlen(src);
	if (dst == NULL && size == 0)
		return (len_src);
	len_dst = ft_strlen(dst);
	if (!src && size == 0)
		return (0);
	if (size <= len_dst || size == 0)
		return (len_src + size);
	while (src[i] && len_dst + i < size - 1)
	{
		dst[len_dst + i] = src[i];
		i++;
	}
	dst[len_dst + i] = '\0';
//	printf("%s\n", dst); // a supprimer
	return (len_src + len_dst);
}

// int	main(int ac, char **av)
// {
// 	char *dst = NULL;
// //	char src[]="jour";
// 	char *dst2 = NULL;
// //	char src[]= av[2];
// 	size_t size;
// 	size_t res;
// 	size_t res2;

// 	//res = ft_strlcat(dst, src, 6);
// 	// size = (size_t)av[3];
// 	// res = ft_strlcat(av[1], av[2], size);
// 	size = 0;
// 	// res = ft_strlcat(dst, "gxyged\n", size);
// 	res2 = ft_strlcat(dst2, "gxyged\n", size);

// 	// if (dst == NULL)
// 	// 	printf("Cest null\n");
// 	// else
// 	// {
// 	// 	printf("res = %ld\n", res);
// 	// 	printf("dst[%s]\n", dst);
// 	// }

// 	printf("\n------------------\n");

// 	if (dst2 == NULL)
// 	{
// 		printf("Cest null\n");
// 		printf("res2 = %ld\n", res2);
// 	}
// 	else
// 	{
// 		printf("res2 = %ld\n", res2);
// 		printf("dst2[%s]\n", dst2);
// 	}


// 	return (0);
// }