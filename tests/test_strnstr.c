/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strnstr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: greus-ro <greus-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 17:02:32 by greus-ro          #+#    #+#             */
/*   Updated: 2024/01/10 17:22:10 by greus-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../libft/libft.h"
#include "./inc/gab_test.h"

//char	*ft_strnstr(const char *big, const char *little, size_t len) 

void test(const char *big, const char *little, size_t len)
{
    char *ft_resultado;
    char *resultado;

    printf("Calculando std...");
    resultado = strnstr(big,little,len);
    printf("Calculando ft...");
    ft_resultado = ft_strnstr(big, little, len);
    printf("std: _%s_ ft: _%s_\n",resultado, ft_resultado);
    printf("TEST******************\n");
    if ((ft_resultado == NULL && resultado == NULL) || strcmp(ft_resultado, resultado) == 0)
        PRINTF_GREEN_COLOR;
    else
        PRINTF_RED_COLOR;
    printf("\tbig = %s\n", big);
    printf("\tlittle = %s\n", little);
    printf("\tlen = %lu\n", len);
    printf("\t\tft_strnstr = _%s_ \n", ft_resultado);
    printf("\t\tstrnstr = _%s_ \n", resultado);
    printf("\n");
    PRINTF_DEFAULT_COLOR;
    printf("END TEST**************\n");
    /*
    if(resultado != NULL)
        free(resultado);
    if( ft_resultado != NULL)
        free(ft_resultado);
*/
}


int main(void)
{
    test("","",1);

    test("Gabriel","Gab",10);
    test("Gabriel","Gab",2);
    test("GaGabbriel","Gab",2);
    test("Ga\nbriel","Gab",10);
    test("Ga\nbriel","",10);
    test("Gabriel","bri",20);
    test("Gabriel","brielin",20);
    test("GsGaGa","Ga",20);
}