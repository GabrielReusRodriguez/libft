/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_substr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: greus-ro <greus-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 17:24:54 by greus-ro          #+#    #+#             */
/*   Updated: 2024/01/10 17:28:51 by greus-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../libft/libft.h"
#include "./inc/gab_test.h"

//char	*ft_substr(char const *s, unsigned int start, size_t len)

void test(char const *s, unsigned int start, size_t len)
{
    char *ft_resultado;

    ft_resultado = ft_substr(s, start, len);

    printf("TEST******************\n");
    printf("\ts = %s\n", s);
    printf("\tstart = %d\n", start);
    printf("\tlen = %lu\n", len);
    printf("\t\tft_substr = _%s_ \n", ft_resultado);
    printf("\n");
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
    test("",0,1);
    test("",1,10);
    test("Gabriel Reus Rodriguez",0,10);
    test("Gabriel Reus Rodriguez",0,100);
    test("Gabriel Reus Rodriguez",10,100);
    test("Gabriel Reus Rodriguez",2,5);
    test("Gabriel Reus Rodriguez",3,1);
    test("Gabriel Reus Rodriguez",3,0);
    
    }