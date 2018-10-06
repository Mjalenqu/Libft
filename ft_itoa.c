/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_itoa.c                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mjalenqu <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/04 18:19:32 by mjalenqu     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/06 09:24:15 by mjalenqu    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

static char	*remplissage(char *str, int n, int j, int signe)
{
	if (signe == 1)
		str[0] = 45;
	if (n == -2147483648)
	{
		str = ft_strdup("-2147483648");
		return (str);
	}
	while (n > 9)
	{
		str[j] = (n % 10) + '0';
		n = n / 10;
		j--;
	}
	str[j--] = (n + '0');
	return (str);
}

char		*ft_itoa(int n)
{
	char	*str;
	int		signe;
	int		i;
	int		j;

	j = 1;
	signe = 0;
	if (n < 0)
	{
		signe = 1;
		n = -n;
	}
	i = n;
	while (i > 9)
	{
		i = i / 10;
		j++;
	}
	if ((str = ft_strnew(j + signe)) == NULL)
		return (0);
	str = remplissage(str, n, (j - 1 + signe), signe);
	return (str);
}
