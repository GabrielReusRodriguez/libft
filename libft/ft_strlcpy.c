/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: greus-ro <greus-ro@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 00:32:13 by greus-ro          #+#    #+#             */
/*   Updated: 2024/01/10 00:32:15 by greus-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

/*
Copia de src a dst teniendo en cuenta que size es el tamaño máximo de dst 
	 y que tenemos que garantizar que el rsutlado acaba en \0
El while nos hace copiar bytes bien hasta que llegamos al final de src
	o llegamos al ultimo byte de dst ( recuerda que hay que guardar un byte
	para \0 )
*/
size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	len;

	len = ft_strlen(src);
	if (size == 0)
		return (len);
	i = 0;
	while (i < len && i < size - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (len);
}
