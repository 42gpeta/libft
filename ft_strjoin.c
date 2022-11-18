/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpeta <gpeta@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 16:52:43 by gpeta             #+#    #+#             */
/*   Updated: 2022/11/18 19:33:37 by gpeta            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*join;
	int		len;

	len = (int)ft_strlen(s1) + (int)ft_strlen(s2);
	if (s1 == NULL || s2 == NULL)
		return (NULL);
	join = malloc(sizeof(*join) * len);
	i = 0;
	while (s1[i] != '\0')
	{
		join[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j] != '\0')
	{
		join[i] = s2[j];
		i++;
		j++;
	}
	return (join);
}

/* int	main(void)
{
	char test1[]="bon";
	char test2[]="jour";
	char *res;

	res = ft_strjoin(test1, test2);

	printf("%s\n", res);

	return (0);
} */