/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: greus-ro <greus-ro@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 00:32:06 by greus-ro          #+#    #+#             */
/*   Updated: 2024/01/10 00:32:08 by greus-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

/*
Hacemos cat de los strings que nos pasan y en size nos envian el 
	tamaño de dst.
Es OBLIGATORIO acabar el string con \0.
Devolvemos el tamaño del string que QUERIAMOS crear y esto lo calculamos 
	antes de concatenar. El if que compara el dst_size y el size es para
	quedarnos con el menor  de los 2. Ya que si size < dst_size es que 
	nos han pasado mal el tamaño.
OJO!! que cuando concatenamos iteramos en i +dst_size < size - 1 
	precisamente para garantizar que tensmo hueco para el \0
*/
size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_size;
	size_t	src_size;
	size_t	return_size;
	size_t	i;

	src_size = ft_strlen(src);
	dst_size = ft_strlen(dst);
	if (dst_size < size)
		return_size = src_size + dst_size;
	else
		return_size = src_size + size;
	i = 0;
	if (size == 0)
		return (return_size);
	while (i + dst_size < size - 1 && src[i] != '\0')
	{
		dst[i + dst_size] = src[i];
		i++;
	}
	dst[i + dst_size] = '\0';
	return (return_size);
}
