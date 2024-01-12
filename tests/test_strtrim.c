/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strtrim.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: greus-ro <greus-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 16:51:59 by greus-ro          #+#    #+#             */
/*   Updated: 2024/01/10 16:59:28 by greus-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../libft/libft.h"
#include "./inc/gab_test.h"

void test(char const *s1 , char const *set)
{
    char *resultado;

    resultado = ft_strtrim(s1,set);

    printf("TEST******************\n");
    printf("\ts1 = %s\n", s1);
    printf("\tset = %s\n", set);
    printf("\t\tstrtrim = _%s_ \n", resultado);
    printf("\n");
    printf("END TEST**************\n");
    free(resultado);
    
}


int main(void)
{
    test("",",");
    test("Gabriel",",");
    test(",Gabriel,,Reus,,,,Rodriguez,,,",",");
    test(",Gabriel,,ReusRodriguez,,,",",");
    test(",Gabriel,,ReusRodriguez,,,","");
    test(",,,,","");
    test(",,,,",",");
    test(",,,,,,Gabriel,,ReusRodriguez,,,",",");
    test(",,@,,,Gabriel,,ReusRodriguez,@,",",@");

}