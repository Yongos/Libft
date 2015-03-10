/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysoutham <ysoutham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/15 15:59:32 by ysoutham          #+#    #+#             */
/*   Updated: 2014/11/15 16:28:25 by ysoutham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*g;
	size_t	x;

	x = 0;
	g = ft_strnew(len + 1);
	if (s == NULL || g == NULL)
		return (NULL);
	while (x < len)
	{
		g[x] = s[start];
		x++;
		start++;
	}
	return (g);
}
