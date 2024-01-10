/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: greus-ro <greus-ro@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 00:33:57 by greus-ro          #+#    #+#             */
/*   Updated: 2024/01/10 00:33:58 by greus-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

/*
Calcula el tamanyo del string que tenemos que generar.
El cast de start es para forzar que compare sin signo.
*/
static	size_t	ft_check_size(size_t size_str, size_t len, int start)
{
	size_t	size_new_ptr;

	if (len + start <= size_str)
		size_new_ptr = len;
	else
	{
		if ((size_t)start >= size_str)
			size_new_ptr = 0;
		else
			size_new_ptr = size_str - start;
	}
	return (size_new_ptr);
}

/*
Para hacer substr tenemos en cuenta  que si el start + len es mayor que 
el tamanyo del string original, usamos la longitud del substr lo que este dentro 
del string (size - start). 

En caso que start sea mayor que la longitud del str, devolvemos un string vacio
(eso es un malloc de 0 + 1) y el \0
*/
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	size;
	size_t	size_str;
	size_t	i;

	size_str = ft_strlen(s);
	size = ft_check_size(size_str, len, start);
	substr = (char *)malloc(size + 1);
	if (substr == NULL)
		return (NULL);
	i = 0;
	while (i < size && s[start + i] != '\0')
	{
		substr[i] = s[start + i];
		i++;
	}
	substr[i] = '\0';
	return (substr);
}
