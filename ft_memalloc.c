/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysoutham <ysoutham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/13 11:26:33 by ysoutham          #+#    #+#             */
/*   Updated: 2014/11/13 11:28:58 by ysoutham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	unsigned char *g;

	g = (unsigned char *)malloc(size * sizeof(unsigned char));
	if (g == NULL)
		return (NULL);
	ft_memset(g, 0, size);
	return (g);
}
