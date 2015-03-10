/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysoutham <ysoutham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 19:24:04 by ysoutham          #+#    #+#             */
/*   Updated: 2014/11/12 11:00:18 by ysoutham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void *ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	x;
	char	*ds;
	char	*sr;

	sr = (char *)src;
	ds = (char *)dst;
	x = 0;
	while (x < n)
	{
		ds[x] = sr[x];
		x++;
	}
	return (dst);
}
