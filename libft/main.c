#include "./inc/libft.h"
#include "./inc/ft_get_next_line.h"
#include "./inc/ft_printf.h"
#include <stdio.h>

int main(void)
{
    char    *str = "Hola mundo!";
    size_t  size;

    size = ft_strlen(str);
    printf("Valor es: %lu\n",size);
    printf("Valor open_max : %d\n",OPEN_MAX);
    ft_printf("Hola mundo!!\n");
    return(0);

}
