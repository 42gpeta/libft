/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpeta <gpeta@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 17:03:42 by gpeta             #+#    #+#             */
/*   Updated: 2022/11/28 20:04:19 by gpeta            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	lsrc;

	i = 0;
	lsrc = ft_strlen(src);
	if (size == 0)
		return (lsrc);
	while (i < size - 1 && src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (i);
}

/* int	main(void)
{
 	//size_t resMAN; // MAN
	//char srcMAN[]= "bonjour";
	//char destMAN[] = "";
	size_t resMOI; // MOI
	char srcMOI[]= "bon";
	char destMOI[] = "";
	size_t i;
	
	//resMAN = strlcpy(destMAN, srcMAN, sizeof(srcMAN));
	resMOI = ft_strlcpy(destMOI, srcMOI, 10);

	//printf("MAN : %ld\n\n", resMAN);
	//for (i = 0; i < resMAN; i++)
	//printf("dst[%ld] = %c\n", i, destMAN[i]);

	printf("\n******************\n");

	printf("MOI : %ld\n\n", resMOI);
	for (i = 0; i < destMOI[i]; i++)
		printf("dst[%ld] = %c\n", i, destMOI[i]);

	return (0);
} */

/*int	main(int ac, char **av)
{
	size_t resMOI; // MOI
	char srcMOI[]= "bonjo";
	char destMOI[] = "";
	//size_t i;
	size_t size_av;

	resMOI = 0;
	size_av = (size_t)av[2];
	resMOI = ft_strlcpy(destMOI, av[1], size_av);

	printf("%ld\n", resMOI);
	
/* 	printf("\n******************\n");

	printf("MOI : %ld\n\n", resMOI);
	for (i = 0; i < destMOI[i]; i++)
		printf("dst[%ld] = %c\n", i, destMOI[i]);

	printf("\n******************\n");

	printf("MOI : %ld\n\n", resMOI);
	for (i = 0; i < destMOI[i]; i++)
		printf("dst[%ld] = %c\n", i, destMOI[i]); //
	
	return (0);
} */

int	main(int ac, char **av)
{
	char	dst[]="bonjourou";
	char	dst2[]="bonjourou";
	char	src[]="bonjour";
	char	src2[]="bonjour";
	size_t	psrc = 0;
	size_t	psrc2 = 0;

 	psrc = strlcpy(dst, src, 7 + 1);
 	 if (psrc == 0)
	 	printf("*** MAN ***\ncest null\n");
	 else
		printf("*** MAN ***\n%ld\n", psrc); 

	printf("\n*****************************\n\n");

 	psrc2 = strlcpy(dst, src, 7 + 1);
 	 if (psrc2 == 0)
	 	printf("*** MAN ***\ncest null\n");
	 else
		printf("*** MOI ***\n%ld\n\n", psrc2); 


	return (0);

}