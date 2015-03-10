/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysoutham <ysoutham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 19:07:45 by ysoutham          #+#    #+#             */
/*   Updated: 2015/01/06 16:18:21 by ysoutham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void *ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			x;
	char			*ds;
	char			*sr;

	sr = (char *)src;
	ds = (char *)dst;
	x = 0;
	while (x < n)
	{
		if (sr[x] == c)
		{
			ds[x] = sr[x];
			return ((char *)ds + ((x) + 1));
		}
		ds[x] = sr[x];
		x++;
	}
	return (NULL);
}
