/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strjoin.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: greus-ro <greus-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 17:02:32 by greus-ro          #+#    #+#             */
/*   Updated: 2024/01/11 10:49:21 by greus-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../libft/libft.h"
#include "./inc/gab_test.h"

//char	*ft_strjoin(char const *s1, char const *s2)

void test(const char *s1, const char *s2)
{
    char *ft_resultado;

    ft_resultado = ft_strjoin(s1,s2);
    printf("TEST******************\n");
    printf("\ts1 = _%s_\n", s1);
    printf("\ts2 = _%s_\n", s2);
    printf("\t\tft_strjoin = _%s_ \n", ft_resultado);
    printf("\n");
    printf("END TEST**************\n");
}


int main(void)
{
    test("","");

    test("Gabriel","Gab");
    test("Gabriel","");
    test("","GAB");
    return (0);
}