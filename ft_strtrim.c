/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpeta <gpeta@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 17:45:13 by gpeta             #+#    #+#             */
/*   Updated: 2022/12/13 19:35:01 by gpeta            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

/* int	ft_count_trim(char const *s1, char const *set) // version complete
{
	int	i;
	int	len;

	len = ft_strlen(s1) - 1;
	i = 0;
	while (ft_in_trim(s1[i], set) && s1[i] != '\0')
		i++;
	printf("ft_count ** i = %d\n", i); // a supprimer
	while (ft_in_trim(s1[len], set) && len != 0)
		len--;
	printf("ft_count ** len = %d\n", len); // a supprimer
	if (len - i < 0)
		return (0);
	return (len - i);
} */

/* int	ft_count_trim_before(char const *s1, char const *set) // avant txt
{
	int	i;
	int	len;

	len = ft_strlen(s1) - 1;
	i = 0;

	while (ft_in_trim(s1[i], set) && s1[i] != '\0')
		i++;
	// printf("before ** i = %d\n", i); // a supprimer
	if (i == len)
		return (len);
	return (i);
}

int	ft_count_trim_after(char const *s1, char const *set) // apres txt
{
	int	len;

	len = ft_strlen(s1) - 1;
	while (ft_in_trim(s1[len], set) && len != 0)
		len--;
	// printf("after ** len = %d\n", len); // a supprimer
	return (len);
} */


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

/* char	*ft_strtrim(char const *s1, char const *set) // original v2
{
	int		i;
	int		j;
	int		pos_b;
	int		pos_a;
	char	*pn;

	if (!s1)
		return (NULL);
	i = 0;
	pos_b = ft_count_trim_before(s1, set);
	// printf("pos_b = %d\n", pos_b); // a supprimer
	pos_a = ft_count_trim_after(s1, set);
	// printf("pos_a = %d\n", pos_a); // a supprimer
	pn = malloc(sizeof(char) * ((pos_a - pos_b) + 1));
	if (!pn)
		return (NULL);

	while (s1[i] == *set)
		i++;
	j = 0;
	while (s1[i] != *set && s1[i + 1] != '\0' && pos_b <= pos_a)
	{
		pn[j] = s1[pos_b];
		pos_b++;
		j++;
	}
	pn[j] = '\0';
	return (pn);
} */

// ************************************************************

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	size_t	iword;
	char	*pn;

	if (!s1)
		return (NULL);
	i = 0;
	j = ft_strlen(s1);
	while (ft_in_trim(s1[i], set) && s1[i] != '\0')
		i++;
	// printf("after ** i = %ld\n", i); // a supprimer
	while (ft_in_trim(s1[j - 1], set) && j > i)
		j--;
	// printf("before ** j = %ld\n", j); // a supprimer
	pn = malloc (sizeof(char) * ((j - i) + 1));
	// printf("j - i = %ld\n", (j - i)); // a supprimer
	if (!pn)
		return (NULL);
	iword = 0;
	while (i < j)
	{
		pn[iword] = s1[i];
		// printf("pn[%ld] : %c\n", iword, pn[iword]); // a supprimer
		iword++;
		i++;
	}
	pn[iword] = '\0';
	return (pn);
}

// int	main(void)
// {
// 	char	test[] = "|||||||/Salut|Ca/Va|/";
// 	// char	test[] = "Salut|Ca/Va|/";
// 	// char	test[] = "|||||||/Salut|Ca/Va";
// 	// char	test[] = "Bonjour";
// 	char	set[] = "|/";
// 	char	*ptest;

// 	ptest = ft_strtrim(test, set);

// 	printf("before : %s\nafter : %s", test, ptest);

// 	return (0);

// }
