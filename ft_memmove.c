/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpeta <gpeta@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 18:00:35 by gpeta             #+#    #+#             */
/*   Updated: 2022/11/09 18:17:24 by gpeta            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <unistd.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	int	i;
	unsigned char	tmp;

	i = 0;
	while (i < n)
	{
		((unsigned char *)tmp)[i] = ((unsigned char *)dest);
		((unsigned char *)dest)[i] = ((unsigned char *)src);
		((unsigned char *)src)[i] = ((unsigned char *)tmp);
		i++;
	}
	return (dest);
}

int	main()
{
	char	src[]="bonjour";
	char	dest[]="aurevoir";
	char	src2[]="bonjour";
	char	dest2[]="aurevoir";

	printf("----------MAN-----------\n");
	printf("src : %s\ndest : %s\n\n", src, dest);
	memmove(dest, src, 7);
	//swap(dest, src, 5);
	printf("src apres : %s\ndest apres : %s", src, dest);
	
	printf("\n----------MOI-----------\n");

	printf("src : %s\ndest : %s\n\n", src2, dest2);
	ft_memmove(dest2, src2, 7);
	printf("src apres : %s\ndest apres : %s", src2, dest2);

	return (0);
}