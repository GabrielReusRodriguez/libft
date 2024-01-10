/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: greus-ro <greus-ro@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 00:28:40 by greus-ro          #+#    #+#             */
/*   Updated: 2024/01/10 00:28:44 by greus-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

/*
Hay que hacer el cast de int c a unsigned char xq lo especifica la documentacion
*/
void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char		*ptr;
	size_t				i;
	unsigned char		uc;

	ptr = (unsigned char *)s;
	uc = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (ptr[i] == uc)
			return (ptr + i);
		i++;
	}
	return (NULL);
}
