/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jajuntti <jajuntti@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 10:02:30 by jajuntti          #+#    #+#             */
/*   Updated: 2023/11/06 14:53:22 by jajuntti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*next;

	if (lst == NULL || del == NULL)
		return ;
	while (*lst)
	{
		next = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = next;
	}
}
/*
Function name ft_lstclear
Prototype void ft_lstclear(t_list **lst, void (*del)(void*));
Turn in files -
Parameters lst: The address of a pointer to a node.
del: The address of the function used to delete
the content of the node.
Return value None
External functs. free
Description Deletes and frees the given node and every
successor of that node, using the function ’del’
and free(3).
Finally
*/