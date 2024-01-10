/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: greus-ro <greus-ro@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 00:33:37 by greus-ro          #+#    #+#             */
/*   Updated: 2024/01/10 00:33:43 by greus-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

/*
Segun la documentacion, hay que hacer cast del int a char para hacer la 
comparacion de los caracteres
*/
char	*ft_strrchr(const char *s, int c)
{
	char	*occurrence;
	char	character;

	character = c;
	occurrence = NULL;
	while (*s != '\0')
	{
		if (*s == character)
			occurrence = (char *)s;
		s++;
	}
	if (*s == character)
		return ((char *)s);
	else
		return (occurrence);
}
