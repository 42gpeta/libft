/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpeta <gpeta@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 17:03:42 by gpeta             #+#    #+#             */
/*   Updated: 2022/11/18 19:25:25 by gpeta            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// a faire  		// voir strncpy

/*

	copier les elements sans depasser size

*/

#include "libft.h"

int	ft_strlcpy(char *dst, const char *src, size_t size)
{
	
}

int	main()
{
	char srcMAN[]= "bonjour";
	char destMAN[] = "";
	char res[] = "";
	
	res = strlcpy(destMAN, srcMAN, 7);

	printf("MAN : %s", res);

	return (0);
}