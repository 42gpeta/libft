/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpeta <gpeta@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 18:46:33 by gpeta             #+#    #+#             */
/*   Updated: 2022/12/09 18:42:21 by gpeta            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// OK

#include "libft.h"

int	f_len (const char *s, char c)
{
	int i;

	i = 0;
	while (s[i] != c && s[i] != '\0')
		i++;
//	printf("f_len ** nb de char dans word : %d\n", i);  // a supprimer
	return (i);
}

int	f_count (const char *s, char c)
{
	int	i;
	int word;

	i = 0;
	word = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		i = f_len(s, c);
		s += i;
		if (i != 0)
			word++;

	}
//	printf("f_count ** nb word : %d\n", word);  // a supprimer
	return (word);

	}
	
char	*f_strndup(const char *s, int nj)
{
    int	i;
	char	*ps;

	i = 0;
	ps = (char *)malloc(sizeof(char) * nj + 1);
	if (!ps)
		return (NULL);
	while (s[i] && i < nj)
	{
		ps[i]= s[i];
		i++;
	}
	ps[i] = '\0';
	return (ps);

}

 char	**ft_split(const char *s, char c)
{
	char	**ntab;
	int		w;
	int		i;
	int		j;

	if (s == NULL)
		return (NULL);
	w = f_count(s, c);
//	printf("ft_split ** nb word : %d\n", w);  // a supprimer
	
	ntab = (char **)malloc(sizeof(char *) * (w + 1) );
	if (!ntab)
		return (NULL);
	
	i = 0;
	j = 0;
	while (i < w)
	{
		while (*s == c)
			s++;
		j = f_len(s, c);
		ntab[i] = f_strndup(s, j);
		printf("i = %d\nj = %d\nS = %c\n", i, j, *s);
		s += j;
		i++;
	}
	ntab[i] = NULL;
	return (ntab);
} 

/* int	main(void)
{
	char	*test;
	test = "Bonjour,les,amis, dr , tintin, ";
	char	*ptest;
	char	**ptest2;
	int	i;
	int number_word;

//	 ******** F_COUNT ******** : compter les mots
	
//	number_word = f_count(test, ',');
//	printf("f_count ** nb word : %d (main)\n", number_word);  // a supprimer

	
//	 ******** FT_SPLIT ******** : decouper les mots

//	ptest = f_tabsplit(test,8,12);

	
//	 ******** FT_SPLIT ******** : fonction finale
	
//  	ptest2 = ft_split(test, ',');

	printf("\n----------------------\n");

	for (i = 0; i < number_word; i++)
		printf("[%d] : %s \n",i, ptest2[i]);

	printf("\nmot isole : %s\n",ptest2[1]);

	printf("\n----------------------\n");

	ptest2 = ft_split(test, ',');
	printf("%s", ft_split(test, ',')[1]);
	printf("%s", ft_split(test, ',')[2]);
	printf("%s", ft_split(test, ',')[3]);


	

	return 0;
} */

/* int		main(void) *** BON MAIN ***
{
	int i = 0;
	char **tab;
		
	tab = ft_split("bonjour je m'appel Arthur", ' ');
	while (i < 4)
	{
		printf("string %d : %s\n", i, tab[i]);
		i++;
	}
	return (0);
} */