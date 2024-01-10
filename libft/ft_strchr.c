/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: greus-ro <greus-ro@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 00:31:22 by greus-ro          #+#    #+#             */
/*   Updated: 2024/01/10 00:31:23 by greus-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

/*
Obtiene la primer aparición del caracter char,
	OJO!! el man especifica que hay que hacer cast de c a char y que 
	TB SE INCLUYE \0 EN LAS BUSQUEDAS.
*/
char	*ft_strchr(const char *s, int c)
{
	char	*string;
	char	character;

	string = (char *)s;
	character = (char)c;
	while (*string != '\0')
	{
		if (*string == character)
			return (string);
		string++;
	}
	if (*string == character)
		return (string);
	return (NULL);
}
