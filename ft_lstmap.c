/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysoutham <ysoutham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/27 15:48:04 by ysoutham          #+#    #+#             */
/*   Updated: 2015/01/27 15:49:53 by ysoutham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list*new_list;
	t_list*start;
	t_list*tmp;

	if (!lst || !f)
		return (NULL);
	tmp = (*f)(lst);
	new_list = ft_lstnew(tmp->content, tmp->content_size);
	if (!new_list)
		return (NULL);
	start = new_list;
	while (lst->next)
	{
		tmp = f(lst->next);
		ft_lstadd(&new_list->next, ft_lstnew(tmp->content, tmp->content_size));
		if (!new_list)
			return (NULL);
		lst = lst->next;
		new_list = new_list->next;
	}
	return (start);
}
