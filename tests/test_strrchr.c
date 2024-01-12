/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strrchr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: greus-ro <greus-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 20:31:26 by greus-ro          #+#    #+#             */
/*   Updated: 2024/01/11 10:14:05 by greus-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "../libft/libft.h"
#include "./inc/gab_test.h"

void	test(char *ptr, char caracter)
{
	char *occ;
	char *ft_occ;

    occ = strrchr(ptr, caracter);
    ft_occ = strrchr(ptr, caracter);
	
	 printf("TEST******************\n");
    if (occ  == ft_occ)
        PRINTF_GREEN_COLOR;
    else
        PRINTF_RED_COLOR;
    printf("\tptr = _%s_\n", (unsigned char *)ptr);
    printf("\t\tstrrchr retorna %p\n", occ);
    printf("\t\tft_strrchr retorna %p\n", ft_occ);
    occ  == ft_occ ? printf("\tOK") : printf("\tFAIL");
    PRINTF_DEFAULT_COLOR;
    printf("\n");
    printf("END TEST**************\n");	
}

int	main(void)
{
    test("",'a');
    test("drafaet",'a');
    test("adrafaet",'a');
    test("drfet",'a');
    test("drafaet",'\0');
    test("",'\0');
	return (0);
}

