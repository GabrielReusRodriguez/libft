/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_atoi.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: greus-ro <greus-ro@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 20:31:26 by greus-ro          #+#    #+#             */
/*   Updated: 2024/01/09 20:38:44 by greus-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdlib.h>
#include <stdio.h>
#include "../libft/libft.h"

int	main(void)
{
	
	printf("ft_atoi value: %d atoi value %d\n",ft_atoi("+-54"),atoi("+-54"));
	//printf("ft_atoi value: %d atoi value %d\n",ft_atoi(NULL),atoi(""));
	printf("ft_atoi value: %d atoi value %d\n",ft_atoi("a"),atoi("a"));
	printf("ft_atoi value: %d atoi value %d\n",ft_atoi(""),atoi(""));
	printf("ft_atoi value: %d atoi value %d\n",ft_atoi(" 4"),atoi(" 4"));
	printf("ft_atoi value: %d atoi value %d\n",ft_atoi(" -4"),atoi(" -4"));
	printf("ft_atoi value: %d atoi value %d\n",ft_atoi(" -+4"),atoi(" -+4"));
	printf("ft_atoi value: %d atoi value %d\n",ft_atoi(" --4"),atoi(" --4"));
	printf("ft_atoi value: %d atoi value %d\n",ft_atoi(" 43a4"),atoi(" 43a4"));
	printf("ft_atoi value: %d atoi value %d\n",ft_atoi(" \t\v\n\r\f123"),atoi(" \t\v\n\r\f123"));
    printf("ft_atoi value: %d atoi value %d\n",ft_atoi("2147483647"),atoi("2147483647"));
    printf("ft_atoi value: %d atoi value %d\n",ft_atoi("-2147483648"),atoi("-2147483648"));
	//printf("ft_atoi value: %d atoi value %d\n",ft_atoi("\001 4"),atoi("\001 4"));
	 	
	char buffer[200];
	for (int i = 0; i <= 0xFF; i++) {
		printf("Valor test: %d\n",i);
		sprintf(buffer, "%c %i", (unsigned char)i, i + 1);
		//res = single_test_atoi(18 + i, buffer) && res;
		printf("ft_atoi value: %d atoi value %d\n",ft_atoi(buffer),atoi(buffer));
	}

	

	return (0);
}

