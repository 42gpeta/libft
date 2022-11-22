/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpeta <gpeta@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 19:22:35 by gpeta             #+#    #+#             */
/*   Updated: 2022/11/22 17:55:59 by gpeta            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// a faire

#include "libft.h"

char	*ft_strnstr( char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	char	*occur;
	char	*pbig;
	size_t	len_little;

	pbig = big;
	len_little = ft_strlen(little);

	i = 0;
	j = 0;

	if (!little)
		return (pbig);
	while (i < len && big[i] != '\0')
	{
		if (ft_strncmp(little[j], big[j], len) == 0)
		{
			j++;
			i++;
		}
		if (len_little == 0)
			return (occur);

		i++;
	}
	return (NULL);
}

int	main(void)
{
	char	little[]="jour";
	char	big[]="bonjour";
	char	*plittle;

	plittle = ft_strnstr(big, little, 4);

	printf("%s\n",plittle);

	return (0);

}

/* int    *ft_check(char *str, char *cmp)
{
    int i;
    int len;

    len = ft_strlen(str);

    while (str[i] != '\0' && *str != cmp)
    {
        i++;      
    }
    ft_memcmp(str[i],cmp, sizeof(str) * len);

} */
