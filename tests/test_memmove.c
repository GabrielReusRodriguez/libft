/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memmove.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: greus-ro <greus-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 20:31:26 by greus-ro          #+#    #+#             */
/*   Updated: 2024/01/11 09:53:12 by greus-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "../libft/libft.h"

int	main(void)
{

	char	dst1[240];
	char	dst2[240];
	char	*data = "this string will be overlaped !\r\n";
	int		size = 240;

	memset(dst1, 'A', sizeof(dst1));
	memset(dst2, 'A', sizeof(dst2));

	//Apple no falla y por eso necesita el cast a unsigned char , 
	//	no como linux que lo hace el solito.
	memcpy(dst1, (unsigned char *)data, sizeof(data));
	memcpy(dst2, (unsigned char *)data, sizeof(data));

	memmove(dst1, dst1 +3, strlen(data));
	ft_memmove(dst2, dst2 +3, strlen(data));

	if (memcmp(dst1, dst2, size) != 0)
	{
		printf("ERROR\n");
	}
	else
		printf("OK\n");
	return (0);
}

