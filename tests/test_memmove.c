/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memmove.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: greus-ro <greus-ro@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 20:31:26 by greus-ro          #+#    #+#             */
/*   Updated: 2024/01/09 22:42:26 by greus-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "../libft/libft.h"

int	main(void)
{

	char	dst1[0xF0];
	char	dst2[0xF0];
	char	*data = "thiß ß\xde\xad\xbe\xeftriñg will be øvérlapéd !\r\n";
	int		size = 0xF0 - 0xF;

	memset(dst1, 'A', sizeof(dst1));
	memset(dst2, 'A', sizeof(dst2));

	memcpy(dst1, data, sizeof(data));
	memcpy(dst2, data, sizeof(data));

	memmove(dst1, dst1 +3, strlen(data));
	ft_memmove(dst2, dst2 +3, strlen(data));

	if (memcmp(dst1, dst2, size) != 0)
	{
		printf("ERROR\n");
	}
	printf("OK\n");
	return (0);
}

