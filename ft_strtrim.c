/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strtrim.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mjalenqu <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/04 15:21:50 by mjalenqu     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/05 17:35:42 by mjalenqu    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(const char *s)
{
	char	*str;
	int		i;
	int		j;
	int		l;

	j = 0;
	l = 0;
	i = ft_strlen(s);
	i--;
	if ((str = malloc(sizeof(char*) * i + 1)) == NULL)
		return (NULL);
	while (s[j] == 32 || s[j] == '\t' || s[j] == '\n')
		j++;
	while (s[i] == 32 || s[i] == '\t' || s[i] == '\n')
		i--;
	while (j <= i)
	{
		str[l] = s[j];
		l++;
		j++;
	}
	str[l] = '\0';
	return (str);
}
