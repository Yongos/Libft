/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysoutham <ysoutham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/24 19:00:15 by ysoutham          #+#    #+#             */
/*   Updated: 2014/11/24 19:08:03 by ysoutham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list*ft_lstnew(const void *content, size_t content_size)
{
	t_list*t;

	t = (t_list *)malloc(sizeof(t_list));
	if (!t)
		return (NULL);
	if (!content)
	{
		t->content_size = 0;
		t->content = NULL;
	}
	else
	{
		t->content = (void *)malloc(content_size);
		if (!t->content)
			return (NULL);
		t->content_size = content_size;
		ft_memcpy(t->content, content, content_size);
	}
	t->next = NULL;
	return (t);
}
