/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: greus-ro <greus-ro@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 00:29:52 by greus-ro          #+#    #+#             */
/*   Updated: 2024/01/10 00:29:59 by greus-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

/*
	Copia la memoria de n a 0 , para evitar solapamientos
*/
static void	ft_memmove_rev(unsigned char *dest, unsigned char *src, size_t n)
{
	size_t	i;

	i = n;
	while (i > 0)
	{
		dest[i - 1] = src[i - 1];
		i--;
	}
}

/*
	Copia la memoria de 0 a n.
*/
static void	ft_memmove_for(unsigned char *dest, unsigned char *src, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
}

/*
	Llamamos la funcion hacia atras SOLO si el puntero destino está despues 
	del puntero origen. En caso contrario, hacemos hacia adelante.
*/
void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*dest_ptr;
	unsigned char	*src_ptr;

	if (dest == NULL && src == NULL)
		return (NULL);
	dest_ptr = (unsigned char *) dest;
	src_ptr = (unsigned char *) src;
	if (src_ptr < dest_ptr)
		ft_memmove_rev(dest_ptr, src_ptr, n);
	else
		ft_memmove_for(dest_ptr, src_ptr, n);
	return (dest);
}
