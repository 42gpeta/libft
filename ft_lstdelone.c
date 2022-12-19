/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpeta <gpeta@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 18:34:47 by gpeta             #+#    #+#             */
/*   Updated: 2022/12/19 20:05:00 by gpeta            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	t_list	tmp;

	tmp = lst
	while (lst->next != NULL)
		lst = lst next;
	lst->content = free()
}
