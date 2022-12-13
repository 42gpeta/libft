/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpeta <gpeta@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 16:52:43 by gpeta             #+#    #+#             */
/*   Updated: 2022/12/13 19:39:39 by gpeta            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// char	*ft_strcat(char *dest, char *src);

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*join;
	int		len;

	len = (int)ft_strlen(s1) + (int)ft_strlen(s2);
	//printf("s1 = %s | s2 = %s | len = %d\n", s1, s2, len); // a supprimer
	if (!s1 || !s2)
		return (0);
	join = malloc(sizeof(*join) * len + 1);
	if (!join)
		return (NULL);
	i = 0;
	while (s1[i] != '\0')
	{
		join[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j] != '\0')
	{
		join[i + j] = s2[j];
		j++;
	}
	join [i + j] = '\0';
	//printf("\n join = %s \n", join); // a supprimer
	return (join);
}

// char	*ft_strjoin(char const *s1, char const *s2)
// {
// 	int		ljoin;
// 	char	*join;

// 	ljoin = ft_strlen(s1) + ft_strlen(s1);
// 	join = malloc(sizeof(*join) * ljoin + 1);
// 	join = ft_strcat(s1, s2);
// 	join[ljoin] = '\0';

// 	return (join);
// }

// char	*ft_strcat(char *dest, char *src)
// {
// 	int	i;
// 	int	j;

// 	i = 0;
// 	j = 0;
// 	while (dest[i] != '\0')
// 		i++;
// 	while (src[j] != '\0')
// 	{
// 		dest[i + j] = src[j];
// 		j++;
// 	}
// 	dest[i + j] = '\0';
// 	return ((char *)dest);
// }

/* int	main(void)
{
	char test1[]="bon";
	char test2[]="jour";
	char *res;

	res = ft_strjoin(test1, test2);

	printf("%s\n", res);

	return (0);
} */