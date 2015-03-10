/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysoutham <ysoutham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/07 14:43:47 by ysoutham          #+#    #+#             */
/*   Updated: 2014/11/12 16:58:54 by ysoutham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*sr;
	unsigned char	*ds;
	size_t			x;

	ds = (unsigned char *)dst;
	sr = (unsigned char *)src;
	x = 0;
	if (sr < ds)
	{
		while (++x <= len)
			ds[len - x] = sr[len - x];
	}
	else
	{
		while (x < len)
		{
			ds[x] = sr[x];
			x++;
		}
	}
	dst = ds;
	return (dst);
}
