/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_memmove.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mjalenqu <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/03 18:40:30 by mjalenqu     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/05 16:46:34 by mjalenqu    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	if (src > dest)
		ft_memcpy(dest, src, n);
	else
		while (n)
		{
			n--;
			((unsigned char *)dest)[n] = ((unsigned const char *)src)[n];
		}
	return (dest);
}
