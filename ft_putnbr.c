/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_putnbr.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mjalenqu <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/04 10:20:19 by mjalenqu     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/04 10:34:45 by mjalenqu    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int nb)
{
	if (nb >= 0 && nb < 10)
		ft_putchar(nb + '0');
	else if (nb < 0 && nb > -9)
	{
		ft_putchar('-');
		nb = -nb;
		ft_putchar(nb + '0');
	}
	else if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putchar((nb % 10) + '0');
	}
	else if (nb < -9)
	{
		ft_putchar('-');
		ft_putnbr(-(nb / 10));
		ft_putchar(-(nb % 10) + '0');
	}
}
