/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpeta <gpeta@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 20:12:17 by gpeta             #+#    #+#             */
/*   Updated: 2022/12/16 13:31:56 by gpeta            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (*lst)
		new->next = *lst; // si un lien existe : on cree un lien entre A et 2  *** A > 2
	*lst = new; // on raccorde 1 vers A. SI on avait un lien, ca donne 1 > A > 2 SINON 1 > A
}
