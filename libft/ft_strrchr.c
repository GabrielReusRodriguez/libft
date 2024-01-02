/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: greus-ro <greus-ro@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 22:53:52 by greus-ro          #+#    #+#             */
/*   Updated: 2024/01/02 23:15:11 by greus-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*strrchr(const char *s, int c)
{
	char	*occurrence;

	occurrence = NULL;
	while (*s != '\0')
	{
		if (*s == c)
			occurrence = (char *)s;
		s++;
	}
	return (occurrence);
}
