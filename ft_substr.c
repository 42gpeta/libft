/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpeta <gpeta@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 14:45:07 by gpeta             #+#    #+#             */
/*   Updated: 2022/12/14 11:16:46 by gpeta            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ns;
	size_t	i;

	if (!s)
		return (NULL);
	ns = malloc(sizeof(char) * (len + 1));
	if (!ns)
		return (NULL);
	i = 0;
	while (i < len && start < ft_strlen(s))
	{
		ns[i] = s[start + i];
		i++;
	}
	ns[i] = '\0';
	return (ns);
}

/* int	main(int argc, char **argv)
{
	char	test[]="bonjour";
	char	*res;

	res = ft_substr(test,4,4);

	printf("%s\n%s\n", test, res);

	return (0);
} */