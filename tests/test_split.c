/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_split.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: greus-ro <greus-ro@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 22:14:02 by greus-ro          #+#    #+#             */
/*   Updated: 2024/01/03 22:36:09 by greus-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../libft/libft.h"


void    print_tokens(char **tokens)
{
    printf("Tokenator\n");
    while (*tokens != NULL)
    {
        printf("\t _%s_\n",*tokens);
        tokens++;
    }
    printf("El ultimo es: ");
    if (*tokens == NULL)
        printf("NULL\n");
    else
        printf("NO NULL \n");
}


int main(int argc, char **argv)
{
    //argc++;
    //(void)argv;
    char    **tokens;

    if (argc != 2)
    {
        printf("Numero incorrecto de argumentos\n");
        return (1);
    }
    tokens = ft_split(argv[1], ' ');
    print_tokens(tokens);
    return (0);
}