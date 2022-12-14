/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpeta <gpeta@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 14:45:07 by gpeta             #+#    #+#             */
/*   Updated: 2022/12/14 21:05:12 by gpeta            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* char	*ft_substr(char const *s, unsigned int start, size_t len) //		pseudo code
{
	if ()
	// attention si start au dela de notre chaine de char
	// si s est NULL
	// si la taille(len) est de 0 ?
	
	// etape 2 / faire le malloc
	// si la taille de la chaine qu'on veut copier est inferieure a len -> malloc strlen(s + start) + 1
	// si la taille de la chaine qu'on veut copier est superieure a len -> malloc de len / + 1 ?
	// si l'allocation echoue return NULL
	
	// copier la chaine a partir de start / jusqu'au \0 ou len / ou len - 1
	// mettre \0
	// return la nouvelle chaine
} */

/* char	*ft_substr(char const *s, unsigned int start, size_t len) // 		code avec commentaire
{
	size_t	i;
	char	*ps;

	// attention si start au dela de notre chaine de char
	if (start > ft_strlen(s))
		return (NULL);
	// si s est NULL
	if (!s)
		return (NULL);
	// si la taille(len) est de 0 ?
	if (len == 0)
		return (NULL);
	// etape 2 / faire le malloc
	// si la taille de la chaine qu'on veut copier est inferieure a len -> malloc strlen(s + start) + 1
	if (ft_strlen(s) < len)
	{
		ps = malloc(sizeof(char) * (ft_strlen(s + start) + 1));
	// si la taille de la chaine qu'on veut copier est superieure a len -> malloc de len / + 1 ?
	}
	else if (ft_strlen(s) > len)
	{
		ps = malloc(sizeof(char) * len);
	}
	// si l'allocation echoue return NULL
	if (!ps)
		return (NULL);
	// copier la chaine a partir de start / jusqu'au \0 ou len / ou len - 1
	while (*s || len)
	{
		ps[i] = s[start];
		i++;
		start++;
	}
	// mettre \0
	ps[i] = '\0';
	// return la nouvelle chaine
	return (ps);
} */

char	*ft_substr(char const *s, unsigned int start, size_t len) // 		code sans commentaire
{
	size_t	i;
	char	*ps;

	if (start > ft_strlen(s))
		return (NULL);
	if (!s)
		return (NULL);
	if (len == 0)
		return (NULL);
	if (ft_strlen(s) < len)
	{
		ps = malloc(sizeof(char) * (ft_strlen(s + start) + 1));
	}
	else if (ft_strlen(s) > len)
	{
		ps = malloc(sizeof(char) * len);
	}
	if (!ps)
		return (NULL);
	i = 0;
	while (s[i] != '\0' || start < len)
	{
		ps[i] = s[start];
		i++;
		start++;
	}
	ps[i] = '\0';
	return (ps);
}

/* char	*ft_substr(char const *s, unsigned int start, size_t len) // 2 erreurs : 2 ; 10
{
	char	*ns;
	size_t	i;

	// if (!s)
	// 	return (NULL);
	// if (start > ft_strlen(s))
	ns = malloc(sizeof(char) * (len + 1));
	if (!ns)
		return (NULL);
	// else if 
	// {
	// 	// ns = malloc(sizeof(char) * (len + 1)); // 2-10
	// 	// ns = malloc(sizeof(char) * (ft_strlen((char *)s + start) + 1)); // 4-12-16
	// 	ns = malloc(sizeof(char) * (len + 1));
	// 	if (!ns)
	// 		return (NULL);

	i = 0;
	while (i < len && start < ft_strlen(s))
	{
		ns[i] = s[start++];
		i++;
	}
	ns[i] = '\0';
	return (ns);
}*/

/* char	*ft_substr(char const *s, unsigned int start, size_t len) // 2 erreurs : 2 ; 10
{
	char	*ns;
	size_t	i;

	if (!s)
		return (NULL);
	if (start > ft_strlen(s))
	{
		ns = malloc(sizeof(char));
		if (ns == NULL)
			return (NULL);
		ns[0] = '\0';
		return (ns);
	}
	else if (start > len)
	{
		ns = malloc(sizeof(char) * (len + 1));
		if (!ns)
			return (NULL);
	}
	else if 
	{
		// ns = malloc(sizeof(char) * (len + 1)); // 2-10
		// ns = malloc(sizeof(char) * (ft_strlen((char *)s + start) + 1)); // 4-12-16
		ns = malloc(sizeof(char) * (len + 1));
		if (!ns)
			return (NULL);
	}
	i = 0;
	while (i < len && start < ft_strlen(s))
	{
		ns[i] = s[start++];
		i++;
	}
	ns[i] = '\0';
	return (ns);
} */

/* char	*ft_substr(char const *s, unsigned int start, size_t len) // 3 erreurs : 4 ; 12 ; 16 
{
	char	*ns;
	size_t	i;

	if (!s)
		return (NULL);
	if (start > ft_strlen(s))
	{
		ns = malloc(sizeof(char));
		if (ns == NULL)
			return (NULL);
		ns[0] = '\0';
		return (ns);
	}
	ns = malloc(sizeof(char) * (ft_strlen((char *)s + start) + 1));
	if (!ns)
		return (NULL);
	i = 0;
	while (i < len && start < ft_strlen(s))
	{
		ns[i] = s[start++];
		i++;
	}
	ns[i] = '\0';
	return (ns);
} */

/* char	*ft_substr(char const *s, unsigned int start, size_t len) // trop d'erreurs : 2 ; 4 ; 10 ; 12 
{
	char	*ns;
	size_t	i;

	if (!s)
		return (NULL);
	if (start > ft_strlen(s))
	{
		ns = malloc(sizeof(char));
		if (ns == NULL)
			return (NULL);
		ns[0] = '\0';
		return (ns);
	}

	if (start > len)
		ns = malloc(sizeof(char) * (ft_strlen((char *)s + start) + 1));
	else if (start < len)
		ns = malloc(sizeof(char) * (len + 1));
	if (!ns)
		return (NULL);

	i = 0;
	while (i < len && start < ft_strlen(s))
	{
		ns[i] = s[start++];
		i++;
	}
	ns[i] = '\0';
	return (ns);
} */

/* int	main(int argc, char **argv)
{
	char	test[]="bonjour";
	char	*res;

	res = ft_substr(test,4,4);

	printf("%s\n%s\n", test, res);

	return (0);
} */