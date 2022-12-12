/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpeta <gpeta@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 18:23:10 by gpeta             #+#    #+#             */
/*   Updated: 2022/12/12 14:07:38 by gpeta            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// OK

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	if (s == NULL)
		return ;
	while (s[i] != '\0')
		ft_putchar_fd(s[i++], fd);
}

/* int main(int ac, char **av)
{
	int fd = 1;


	if (fd == 2)
	{
		ft_putstr_fd(av[1], fd);
		printf("\nerreur\n");
	}
	else
		printf("RAS\n");
	return (0);
}
 */