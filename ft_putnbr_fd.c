/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_putnbr_fd.c                                   .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mjalenqu <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/04 10:20:19 by mjalenqu     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/04 10:50:53 by mjalenqu    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int nb, int fd)
{
	if (nb >= 0 && nb < 10)
		ft_putchar_fd(nb + '0', fd);
	else if (nb < 0 && nb > -9)
	{
		ft_putchar_fd('-', fd);
		nb = -nb;
		ft_putchar_fd(nb + '0', fd);
	}
	else if (nb > 9)
	{
		ft_putnbr_fd(nb / 10, fd);
		ft_putchar_fd((nb % 10) + '0', fd);
	}
	else if (nb < -9)
	{
		ft_putchar_fd('-', fd);
		ft_putnbr_fd(-(nb / 10), fd);
		ft_putchar_fd(-(nb % 10) + '0', fd);
	}
}
