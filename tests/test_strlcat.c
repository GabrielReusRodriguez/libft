/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strlcat.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: greus-ro <greus-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 12:06:36 by greus-ro          #+#    #+#             */
/*   Updated: 2024/01/10 16:48:32 by greus-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../libft/libft.h"
#include "./inc/gab_test.h"

void test(const char *dst, const char *src, size_t size)
{
    int retorno;
    int ft_retorno;

    char dest[1000];
    char ft_dest[1000];

    //memcpy(dest, dst, size);
    //memcpy(ft_dest, dst, size);
    //dest = strndup(dst,size);
    //ft_dest = strndup(dst,size);
    strcpy(dest, dst);
    strcpy(ft_dest, dst);

    retorno = strlcat(dest,src,size);
    ft_retorno = ft_strlcat(ft_dest,src,size);

    printf("TEST******************\n");
    if (retorno  == ft_retorno && strcmp(ft_dest, dest) == 0)
        PRINTF_GREEN_COLOR;
    else
        PRINTF_RED_COLOR;
    printf("\tsrc = %s\n", src);
    printf("\tdest = %s\n", dst);
    printf("\tsize = %lu\n", size);
    printf("\t\tstrlcat = %s retorna %d\n", dest, retorno);
    printf("\t\tft_strlcat = %s retorna %d\n", ft_dest, ft_retorno);
    retorno  == ft_retorno && strcmp(ft_dest, dest) == 0 ?  printf("\tOK") : printf("\tFAIL");
    PRINTF_DEFAULT_COLOR;
    printf("\n");
    printf("END TEST**************\n");
    
}


int main(void)
{
    
    char dest[] = "abcdefghijk";
    char src[] = "zyxwvutsrqpomnl";

    test(dest,src,0);
    test(dest,src,1);
    test(dest,src,2);
    test(dest,src,10);
    test(dest,src,11);
    test(dest,src,50);
    test(dest,"",10);
    test(dest,"",11);

    char    dest2[300];
    strcpy(dest2,"Gabriel Reus Rodriguez");

    test(dest2,src,0);
    test(dest2,src,1);
    test(dest2,src,2);
    test(dest2,src,10);
    test(dest2,src,11);
    test(dest2,src,50);
    test(dest2,"",10);
    test(dest2,"",11);
    
    test(dest2," en Barcelona , Catalunya, Espanya",300);


}