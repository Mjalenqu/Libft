/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strsplit.c                                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mjalenqu <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/05 19:05:44 by mjalenqu     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/05 19:08:03 by mjalenqu    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

static char	*get_word(char const *s, char c, int i_1)
{
	int		i;
	int		cnt;
	int		temp;
	char	*wrd;

	i = 0;
	while (i_1 > 0 && s[i])
	{
		cnt = 0;
		while (s[i] == c && s[i])
			i++;
		temp = i;
		while (s[i++] != c && s[i])
			cnt++;
		i_1--;
	}
	if (!(wrd = (char *)malloc(sizeof(char) * (cnt + 1))))
		return (NULL);
	cnt = temp;
	i = 0;
	while (s[cnt] != c && s[cnt])
		wrd[i++] = s[cnt++];
	wrd[i] = 0;
	return (wrd);
}

static int	cmp_words(char const *s, char c)
{
	int e;
	int	cmp;

	e = 0;
	cmp = 0;
	if (s[e] != c && s[e] != '\0')
		cmp++;
	while (s[e])
	{
		if (s[e] == c && s[e + 1] != c && s[e + 1] != '\0')
			cmp++;
		e++;
	}
	return (cmp);
}

char		**ft_strsplit(char const *s, char c)
{
	char	**tab;
	size_t	i;
	size_t	cmp;

	i = 0;
	if (s == '\0')
		return (NULL);
	cmp = cmp_words(s, c);
	if (!(tab = (char **)malloc(sizeof(char *) * (cmp + 1))))
		return (NULL);
	while (i < cmp)
	{
		tab[i] = get_word(s, c, i + 1);
		i++;
	}
	tab[i] = 0;
	return (tab);
}
