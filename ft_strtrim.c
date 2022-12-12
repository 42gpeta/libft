/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpeta <gpeta@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 17:45:13 by gpeta             #+#    #+#             */
/*   Updated: 2022/12/12 21:19:24 by gpeta            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// non terminee

// En gros si je te donne une chaine genre |||///Salut/Ca|Va|/,
// et que je te dis de trim selon le charset |/, tu dois me return Salut/Ca|Va
// tu dois enlever tous les charactere du charset au debut
// et a la fin mais pas au milieu

// ***   creer une fonction de verification du set  ***

#include "libft.h"

int	ft_in_trim(char c, char const *set)
{
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

// int	ft_count_trim(char const *s1, char const *set) // version complete
// {
// 	int	i;
// 	int	len;

// 	len = ft_strlen(s1) - 1;
// 	i = 0;
// 	while (ft_in_trim(s1[i], set) && s1[i] != '\0')
// 		i++;
// 	printf("ft_count ** i = %d\n", i); // a supprimer
// 	while (ft_in_trim(s1[len], set) && len != 0)
// 		len--;
// 	printf("ft_count ** len = %d\n", len); // a supprimer
// 	if (len - i < 0)
// 		return (0);
// 	return (len - i);
// }

int	ft_count_trim_before(char const *s1, char const *set) // avant txt
{
	int	i;
	int	len;

	len = ft_strlen(s1) - 1;
	i = 0;
	while (ft_in_trim(s1[i], set) && s1[i] != '\0')
		i++;
		printf("before ** i = %d\n", i); // a supprimer
	if (i == len)
		return (len);
	return (i);
}

int	ft_count_trim_after(char const *s1, char const *set) // apres txt
{
	int	i;
	int	len;

	len = ft_strlen(s1) - 1;
	i = 0;
	while (ft_in_trim(s1[len], set) && len != 0)
		len--;
	printf("after ** len = %d\n", len); // a supprimer
	return (len);
}



/* char	*ft_strtrim(char const *s1, char const *set) // original
{
	int		i;
	int		j;
	char	*pn;
//	char	*pset;
	i = 0;
//	pn = (char *)s1;
	pn = malloc(sizeof(char) * ft_count_trim(s1, set));
// on skype les caracteres dans set qui sont avant le TXT
	while (s1[i] == *set)
		i++;
	j = 0;
	while (s1[i] != *set && s1[i + 1] != '\0')
	{
		pn[j] = s1[i];
		i++;
		j++;
	}
// on skype les caracteres dans set qui sont apres le TXT
	//while (s1[i] == *set)
	//{
	pn[j] = '\0';
	//}
	return (pn);
} */

char	*ft_strtrim(char const *s1, char const *set) // on progress
{
	int		i;
	int		j;
	int		pos_b;
	int		pos_a;
	char	*pn;

	i = 0;
	pos_b = ft_count_trim_before(s1, set);
	pos_a = ft_count_trim_after(s1, set);
	pn = malloc(sizeof(char) *(pos_a - pos_b));
	while (s1[i] == *set)
		i++;
	j = 0;
	while (s1[i] != *set && s1[i + 1] != '\0' && pos_a <= pos_b)
	{
		pn[j] = s1[pos_a];
		pos_a++;
		j++;
	}
	pn[j] = '\0';
	return (pn);
}

int	main(void)
{
	char	test[] = "|/Salut|Ca/Va|/";
	char	set[] = "|/";
	char	*ptest;

	ptest = ft_strtrim(test, set);

	printf("before : %s\nafter : %s", test, ptest);

	return (0);

}
