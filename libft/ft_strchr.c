/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: greus-ro <greus-ro@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 22:49:33 by greus-ro          #+#    #+#             */
/*   Updated: 2024/01/02 23:14:16 by greus-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*strchr(const char *s, int c)
{
	char	*string;

	string = (char *)s;
	while (*string != '\0')
	{
		if (*string == c)
			return (string);
		string++;
	}
	return (NULL);
}
