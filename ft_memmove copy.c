/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove copy.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpeta <gpeta@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 18:00:310 by gpeta             #+#    #+#             */
/*   Updated: 2022/11/10 12:39:1010 by gpeta            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str)
	{
		str++;
		i++;
	}
}

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	int	i;
	int	len;
	void	*tmp;

	i = 0;
	len = ft_strlen(((unsigned char *)src));
	/*if (n <= len)
	{
		while (i < n)
		{
			((unsigned char *)tmp)[i] = ((unsigned char *)src)[i];
			((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
			((unsigned char *)src)[i] = ((unsigned char *)tmp)[i];
			i++;
		}
	}
	else
	{
		while (i < len && ((unsigned char *)src)[i] != '\0')
		{
			((unsigned char *)tmp)[i] = ((unsigned char *)src)[i];
			((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
			((unsigned char *)src)[i] = ((unsigned char *)tmp)[i];
			i++;
		}
	}*/
	while (i < n)
	{
		((unsigned char *)tmp)[i] = ((unsigned char *)src)[i];
		((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
		((unsigned char *)src)[i] = ((unsigned char *)tmp)[i];
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

	printf("\n----------MAN-----------\n");
	
	printf("src : %s\ndest : %s\n\n", src, dest);
	memmove(dest, src, 10);
	printf("src apres : %s\ndest apres : %s", src, dest);
	
	printf("\n\n----------MOI-----------\n");

	printf("adresse scr : %p | dest : %p\n\n", &src, &dest); // adresse
	printf("\nadresse scr2 : %p | dest2 : %p\n\n", &src2, &dest2); // adresse
	
	printf("src2 : %s\ndest2 : %s\n", src2, dest2);
	ft_memmove(dest2, src2, 10);
	printf("src2 apres : %s\ndest2 apres : %s\n\n", src2, dest2);

	return (0);
}