/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: greus-ro <greus-ro@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 00:25:00 by greus-ro          #+#    #+#             */
/*   Updated: 2024/01/10 00:25:03 by greus-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

/*
Añade al frente de la lista. 
Solo hay que tener en cuenta el caso que la lista sea vacia == NULL 
y que cuando no está vacía , el nodo que había es el next del nuevo.
*/
void	ft_lstadd_front(t_list **lst, t_list *new)
{
	t_list	*next;

	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	next = (*lst);
	*lst = new;
	new->next = next;
}
