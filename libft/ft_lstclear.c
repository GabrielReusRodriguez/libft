/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: greus-ro <greus-ro@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 23:57:08 by greus-ro          #+#    #+#             */
/*   Updated: 2024/01/05 00:43:13 by greus-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*node;
	t_list	*next;

	node = *lst;
	while (node->next != NULL)
	{
		next = node->next;
		if (node == *lst)
			(*lst)->next = NULL;
		(*del)(node->content);
		free (node);
		node = next;
	}
}
