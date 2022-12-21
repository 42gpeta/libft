/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpeta <gpeta@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 18:46:33 by gpeta             #+#    #+#             */
/*   Updated: 2022/12/21 15:03:34 by gpeta            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		f_len(const char *s, char c);
int		f_count(const char *s, char c);
char	*f_strndup(const char *s, int nj);

char	**ft_split(const char *s, char c)
{
	char	**ntab;
	int		w;
	int		i;
	int		j;

	if (s == NULL)
		return (NULL);
	w = f_count(s, c);
	ntab = (char **)malloc(sizeof(char *) * (w + 1));
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
		s += j;
		i++;
	}
	ntab[i] = NULL;
	return (ntab);
}

int	f_count(const char *s, char c)
{
	int	i;
	int	word;

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
	return (word);
}

int	f_len(const char *s, char c)
{
	int	i;

	i = 0;
	while (s[i] != c && s[i] != '\0')
		i++;
	return (i);
}

char	*f_strndup(const char *s, int nj)
{
	int		i;
	char	*ps;

	i = 0;
	ps = (char *)malloc(sizeof(char) * nj + 1);
	if (!ps)
		return (NULL);
	while (s[i] && i < nj)
	{
		ps[i] = s[i];
		i++;
	}
	ps[i] = '\0';
	return (ps);
}
