/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove3.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpeta <gpeta@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 17:36:31 by gpeta             #+#    #+#             */
/*   Updated: 2022/11/11 18:08:12 by gpeta            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <unistd.h>

void    *ft_memmove3(void *dest, const void *src, size_t size)
{
    size_t    i;
    char    *desti;
    char    *source;

    desti = (char *)dest;
    source = (char *)src;
    i = 0;
    if (dest == NULL && src == NULL)
        return (NULL);
    if (src < dest)
    {
        while (size-- > 0)
            desti[size] = source[size];
        return (dest);
    }
    while (i < size)
    {
        desti[i] = source[i];
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

	ft_memmove3(src2 + 2, src2, sizeof(char) * 4);

	printf("apres\nsrc : %s | dest : %s\n", src2, src2 + 2);

	return 0;
}