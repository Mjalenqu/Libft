/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strnew.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mjalenqu <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/04 11:56:21 by mjalenqu     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/04 14:00:31 by mjalenqu    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*str;
	size_t	i;

	i = -1;
	str = NULL;
	if ((str = (char *)malloc(sizeof(size_t) * size + 1)) == NULL)
		return (NULL);
	while (i++ != size)
		str[i] = '\0';
	return (str);
}
