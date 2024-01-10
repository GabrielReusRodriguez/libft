/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_itoa.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: greus-ro <greus-ro@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 22:14:02 by greus-ro          #+#    #+#             */
/*   Updated: 2024/01/09 20:38:59 by greus-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <limits.h>
#include "../libft/libft.h"

int main(void)
{
    int value[]={0,1,-1,30,-40,INT_MAX,INT_MIN,101,-101,011,-011};
    int size = 11;
    int i;
    
    i = 0;
    while (i <size)
    {
        printf("Value %d in string is: _%s_\n",value[i],ft_itoa(value[i]));
        i++;
    }
    return (0);
}