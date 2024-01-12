/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strmapi.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: greus-ro <greus-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 16:51:59 by greus-ro          #+#    #+#             */
/*   Updated: 2024/01/11 10:25:13 by greus-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../libft/libft.h"
#include "./inc/gab_test.h"

void test(char const *s1 , char (*f)(unsigned int, char))
{
    char *resultado;

    resultado = ft_strmapi(s1,f);

    printf("TEST******************\n");
    printf("\ts1 = _%s_\n", s1);
    printf("\tresultado = _%s_\n", resultado);
    printf("\n");
    printf("END TEST**************\n");
    free(resultado);
    
}

char p(unsigned int offset, char c)
{
    return ( c + offset);
}

int main(void)
{
    test("",p);
    test("abcdef",p);
}