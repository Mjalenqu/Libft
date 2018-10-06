/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_lstnew.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mjalenqu <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/06 16:02:28 by mjalenqu     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/06 16:50:15 by mjalenqu    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list *elem;

	if (!(elem = malloc(sizeof(t_list) * content_size)))
		return (NULL);
	if (!(content_size) || !(content))
	{
		elem->content_size = 0;
		elem->content = NULL;
	}
	else
	{
		if (!(elem->content = malloc(sizeof(content_size))))
			return (NULL);
		elem->content = ft_memcpy(elem->content, content, content_size);
		elem->content_size = content_size;
	}
	elem->next = NULL;
	return (elem);
}
