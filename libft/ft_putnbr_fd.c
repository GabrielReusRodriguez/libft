/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: greus-ro <greus-ro@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 00:30:52 by greus-ro          #+#    #+#             */
/*   Updated: 2024/01/10 00:30:57 by greus-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_putnbr(unsigned int n, int fd)
{
	char	digit;

	if (n < 10)
	{
		digit = '0' + n;
		ft_putchar_fd(digit, fd);
		return ;
	}
	ft_putnbr(n / 10, fd);
	ft_putnbr(n % 10, fd);
}

/*
Lo hago recursivo y reaprovechando ft_putchar_fd.
Como me envían un int, el mismo int sin signo siempre cabe en unsigned int
	para meterlo, en caso negativo lo multiplico por -1 . OJO!!! 
	que haciendo nbr = -n NO funciona ya que mete -n en otro int y hace
	overflow.
*/
void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	nbr;

	if (n < 0)
	{
		nbr = n * (-1);
		ft_putchar_fd('-', fd);
	}
	else
		nbr = n;
	ft_putnbr(nbr, fd);
}
