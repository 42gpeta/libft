/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpeta <gpeta@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 13:55:49 by gpeta             #+#    #+#             */
/*   Updated: 2022/12/09 18:37:53 by gpeta            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, '\0', n);
}

/* int main()
{
    char    test[] = "bonjour";
    char    test1[] = "bonjour";

    printf("man avant	: %s\n",test);
    printf("moi avant	: %s\n",test1);
	
	bzero(test, 3);
    ft_bzero(test1, 3);
    
	printf("man apres	: %s\n",test);
	printf("moi apres	: %s\n",test1);

	printf("strlen apres	: %ld\n",strlen(test));
	printf("ft_strlen apres	: %ld\n",ft_strlen(test1));

    return 0;
} */
 
