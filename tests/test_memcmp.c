/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memcmp.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: greus-ro <greus-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 20:31:26 by greus-ro          #+#    #+#             */
/*   Updated: 2024/01/11 10:09:00 by greus-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "../libft/libft.h"
#include "./inc/gab_test.h"

void	test(void *ptr1, void *ptr2, size_t size)
{
	int ft_retorno;
	int retorno;

	retorno = memcmp(ptr1,ptr2,size);
	ft_retorno = ft_memcmp(ptr1,ptr2,size);

	 printf("TEST******************\n");
    if (retorno  == ft_retorno)
        PRINTF_GREEN_COLOR;
    else
        PRINTF_RED_COLOR;
    printf("\tptr1 = _%s_\n", (unsigned char *)ptr1);
    printf("\tptr2 = _%s_\n", (unsigned char *)ptr2);
    printf("\t\tmemcmp retorna %d\n", retorno);
    printf("\t\tft_memcmp retorna %d\n", ft_retorno);
    retorno  == ft_retorno ? printf("\tOK") : printf("\tFAIL");
    PRINTF_DEFAULT_COLOR;
    printf("\n");
    printf("END TEST**************\n");	
}

int	main(void)
{
	test("abcdef","abcdef",20);
	test("abcdef","abc",20);
	test("abcdef","abc",0);
	test("","",20);
	test("ab","abc",10);

	return (0);
}

