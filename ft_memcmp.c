/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpeta <gpeta@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 16:57:08 by gpeta             #+#    #+#             */
/*   Updated: 2022/11/18 19:58:50 by gpeta            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*ps1;
	unsigned char	*ps2;
	size_t			i;
	signed int		res;

	ps1 = (unsigned char *)s1;
	ps2 = (unsigned char *)s2;
	i = 0;
	res = 0;
	while (i < n)
	{
		if (ps1[i] > ps2[i])
		{
			res = ps1[i] - ps2[i];
			return (res);
		}
		else if (ps1[i] < ps2[i])
		{
			res = ps1[i] - ps2[i];
			return (res);
		}
		i++;
	}
	return (res);
}

/* int	main (void)
{
	char s1_MAN[]= "bonj";
	char s2_MAN[]= "";
	char s1_MOI[]= "bonj";
	char s2_MOI[]= "";
	int	MAN;
	int	MOI;

	MAN = memcmp(s1_MAN, s2_MAN, sizeof(s1_MAN));
	MOI = ft_memcmp(s1_MOI, s2_MOI, sizeof(s1_MOI));

	printf("MAN = %d\n", MAN);
	printf("MOI = %d\n", MOI);

	return (0);
} */