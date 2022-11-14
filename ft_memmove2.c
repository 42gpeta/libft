/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpeta <gpeta@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 15:49:36 by gpeta             #+#    #+#             */
/*   Updated: 2022/11/11 18:08:25 by gpeta            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <unistd.h>

void	*ft_memmove2(void *dest, const void *src, size_t n)
{
	int		i;
	char	*pdest;
	char	*psrc;
	char	tmp;

	pdest = (unsigned char *)dest;
	psrc = (unsigned char *)src;
	i = 0;

	while (i < n )//*psrc != '\0')
	{
		tmp = psrc[i];
		pdest[i] = psrc[i];
		psrc[i] = tmp;
		i++;
	}

	return (dest);
}

int		main()
{
	char src[] = "bonjour";
	char src2[] = "bonjour";
	char dest[] = "aurevoir";
	char dest2[] = "aurevoir";

	printf("\n---------  MAN  ---------\n");
	printf("avant\nsrc : %s | dest : %s\n", src, src + 2);

	memmove(src + 2, src, sizeof(char) * 4);

	printf("apres\nsrc : %s | dest : %s\n", src, src + 2);
	
	//				******************

	printf("\n\n---------  MOI  ---------\n");
	printf("avant\nsrc : %s | dest : %s\n", src2, src2 + 2);

	ft_memmove2(src2 + 2, src2, sizeof(char) * 4);

	printf("apres\nsrc : %s | dest : %s\n", src2, src2 + 2);

	return 0;
}
