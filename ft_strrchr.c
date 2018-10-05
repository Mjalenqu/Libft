/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strrchr.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mjalenqu <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/04 08:52:04 by mjalenqu     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/04 08:57:52 by mjalenqu    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int len;

	len = ft_strlen(s);
	while (len > 0)
	{
		if (s[len] == (const char)c)
			return ((char*)&s[len]);
		len--;
	}
	if (s[len] == (const char)c)
		return ((char*)&s[len]);
	return (NULL);
}
