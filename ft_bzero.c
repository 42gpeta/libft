/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpeta <gpeta@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 13:55:49 by gpeta             #+#    #+#             */
/*   Updated: 2022/11/18 18:51:13 by gpeta            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	int	i;

    i = 0;
	while (i < n)
	{
		((unsigned char *)s)[i] = 0;
		i++;
	}
}

/* int main()
{
    char    test[] = "bonjour";
    char    test1[] = "bonjour";

    printf("man avant	: %s\n",test);
    printf("moi avant	: %s\n",test1);
	
	bzero(test, 7);
    ft_bzero(test1, 7);
    
	printf("man apres	: %s\n",test);
	printf("moi apres	: %s\n",test1);

    return 0;
}
 */
