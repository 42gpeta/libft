/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpeta <gpeta@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 18:23:40 by gpeta             #+#    #+#             */
/*   Updated: 2022/12/12 14:08:59 by gpeta            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// a verifier

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	// char	*ps;

	if (s == NULL)
		return ;
	ft_putstr_fd(s, fd);
	// printf("%s\n", ps);
	ft_putchar_fd('\n', fd);
}
