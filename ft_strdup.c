/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strdup.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mjalenqu <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/02 10:45:05 by mjalenqu     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/05 11:17:33 by mjalenqu    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*dest;
	int		i;
	int		j;

	i = 0;
	j = ft_strlen(src);
	if ((dest = malloc(sizeof(*dest) * (j + 1))) == NULL)
		return (NULL);
	while (i <= j)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
