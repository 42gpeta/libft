// /* ************************************************************************** */
// /*                                                                            */
// /*                                                        :::      ::::::::   */
// /*   ft_memcpy.c                                        :+:      :+:    :+:   */
// /*                                                    +:+ +:+         +:+     */
// /*   By: gpeta <gpeta@student.42.fr>                +#+  +:+       +#+        */
// /*                                                +#+#+#+#+#+   +#+           */
// /*   Created: 2022/11/09 15:51:19 by gpeta             #+#    #+#             */
// /*   Updated: 2022/11/28 14:56:12 by gpeta            ###   ########.fr       */
// /*                                                                            */
// /* ************************************************************************** */

// #include "libft.h"

// void	*ft_memcpy(void *dest, const void *src, size_t n)
// {
// 	int	i;

// 	i = 0;
// 	while (i < n && ((unsigned char *)src)[i] != '\0')
// 	{
// 		((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
// 		i++;
// 	}
// 	while (i < n)
// 	{
// 		((unsigned char *)dest)[i] = '\0';
// 		i++;
// 	}
// 	return (dest);
// }

// int	main()
// {
// 	char	src[] = "bonjourjour";
// 	char	dest[] = "hokhoki";
// 	char	src2[] = "bonjourjour";
// 	char	dest2[] = "hokhoki";

// 	printf("----------MAN-----------\n");
// 	printf("src : %s\ndest : %s\n\n", src, dest);
// 	memcpy(dest, src, 5);
// 	//strncpy(dest, src, 5);
// 	printf("src apres : %s\ndest apres : %s", src, dest);

// 	for (i = 0; i < strlen(dest); i++)
// 		printf("dest[%d] : %s\n", i, dest[i]);

	
// 	printf("\n----------MOI-----------\n");

// 	printf("src : %s\ndest : %s\n\n", src2, dest2);
// 	ft_memcpy(dest2, src2, 5);
// 	printf("src apres : %s\ndest apres : %s", src2, dest2);

// 	return (0);
// }