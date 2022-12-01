/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpeta <gpeta@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 18:46:33 by gpeta             #+#    #+#             */
/*   Updated: 2022/12/01 18:16:51 by gpeta            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// a faire

#include "libft.h"

/*int	f_next_is_wspace (char prev_c, char next_c)
/*int	f_next_is_wspace (char *s, int len, char prev_c, char next_c)
{
	if (prev_c == 32 || (prev_c >= 9 && prev_c <= 13) && next_c == '\0')
		wspace = 1;
	else
		wspace = 0;

	if (s[len - 1] == wspace)
	
} */

int	f_count (const char *s, char c)
{
	int	i;
	int word;

	if (!*s)
		return (0);
	i = 0;
	word = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			word++;
			i++;
		}
		else
			i++;
	}
	printf("f_count ** nb word : %d\n", word);  // a supprimer
	return (word);

	}
	

char	*f_tabsplit (const char *str, int firstc, int lastc)
{
	int i;
	char *tab;

	tab = malloc((lastc - firstc + 1) * sizeof(*tab));
	if(!str || !tab)
		return (0);
	i = 0;
	while (firstc < lastc)
	{
		tab[i++] = str[firstc++];
		//i++;
		//firstc++;
	}
	tab[i] == '\0';
	
	printf("f_tabsplit ** word decoupe : %s\n\n", tab);  // a supprimer
	return (tab);
}

 char	**ft_split(const char *s, char c)
{
	char	**ntab;
	int		w;
	int		i;
	int		j;
	int		pos;

	w = f_count(s, c); // ?necessaire => oui
	//printf("ft_split ** nb word : %d\n", w);  // a supprimer
	ntab = malloc((w + 1)* sizeof(**ntab));
	if (!s || !ntab)
		return (NULL);
	
	i = 0;
	j = 0;
	pos = -1;
	while (i <= ft_strlen(s))
	{
		if (s[i] != c && pos < 0)
			pos = i;
		
		else if (i == ft_strlen(s) || s[i] == c && pos >= 0)
		{
			ntab[j++] = f_tabsplit(s, pos, i); // comme ntab est un pointeur de pointeur, on stocke les elements mots dans le 1er tab, le 2e tab contient les lettres des mots
			pos = -1;
			//printf("f_tabsplit ** nbtab[%d] word : %s\n", j, ntab[j]);  // a supprimer
			printf("ft_split ** nbtab[%d] word : %s\n", j, ntab[j]);  // a supprimer
		}
		i++;
	}
	ntab[j] = '\0';
	return (ntab);
} 

int	main(void)
{
	char	test[]= "Bonjour,les,amis, dr , tintin";
	char	*ptest;
	char	**ptest2;
	int	i;
	int number_word;

	// ******** F_COUNT ******** : compter les mots
	
	number_word = f_count(test, ',');
	//printf("f_count ** nb word : %d (main)\n", number_word);  // a supprimer

	
	// ******** FT_SPLIT ******** : decouper les mots

	//ptest = f_tabsplit(test,8,12);

	
	// ******** FT_SPLIT ******** : fonction finale
	
/* 	ptest2 = ft_split(test, ',');

	printf("\n----------------------\n");

	for (i = 0; i < number_word; i++)
		printf("[%d] : %s \n",i, ptest2[i]);

	printf("\nmot isole : %s\n",ptest2[0]); */
	

	return 0;
}