/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysoutham <ysoutham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/07 16:49:30 by ysoutham          #+#    #+#             */
/*   Updated: 2014/11/13 11:23:28 by ysoutham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			x;
	unsigned char	*sr;
	unsigned char	g;

	x = 0;
	g = c;
	sr = (unsigned char *)s;
	while (x < n)
	{
		if (sr[x] == g)
			return ((unsigned char *)sr + (x));
		x++;
	}
	return (NULL);
}
