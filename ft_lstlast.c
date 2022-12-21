/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpeta <gpeta@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 13:51:58 by gpeta             #+#    #+#             */
/*   Updated: 2022/12/16 16:53:34 by gpeta            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	while (lst && lst->next != NULL)
		lst = lst->next;
	return (lst);
}

/* int	main(void)
{
	t_list	*lst;
	t_list	**plst;

	int	a = 98;
	int	b = 198;
	int	c = 698;


	lst = ft_lstnew((void)a);
	plst = *lst;
	printf("%p\n", plst);
	// ft_lstadd_front(plst->next, b);
	// printf("%p\n", lst->a);
	// ft_lstadd_front(plst->next, c);
	// printf("%p\n", lst->b->a);


	ft_lstlast(lst);

	return (0);
} */

/* int    main(void) // bon main
{
    t_list    *elem1;
    t_list    *elem2;
    t_list    *elem3;
    t_list    *last;
    int        i1 = 1;
    int        i2 = 2;
    int        i3 = 3;

    elem1 = ft_lstnew(&i1);
    elem2 = ft_lstnew(&i2);
    elem3 = ft_lstnew(&i3);
    elem1->next = elem2;
    elem2->next = elem3;
    elem3->next = 0;
    last = ft_lstlast(elem1);
    printf("%d\n", *(int *)last->content);
	printf("%ld\n", SIZE_MAX);
    return (0);

 } */
