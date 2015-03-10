/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysoutham <ysoutham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/14 11:15:57 by ysoutham          #+#    #+#             */
/*   Updated: 2014/11/17 17:32:22 by ysoutham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char *g;

	g = (char *)malloc(size * sizeof(char));
	if (g == NULL)
		return (NULL);
	ft_memset(g, 0, size + 1);
	return (g);
}
