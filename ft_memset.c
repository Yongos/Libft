/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysoutham <ysoutham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 17:22:30 by ysoutham          #+#    #+#             */
/*   Updated: 2014/11/12 10:40:18 by ysoutham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void				*ft_memset(void *b, int c, size_t len)
{
	unsigned char	k;
	unsigned int	x;
	char			*bb;

	x = 0;
	k = c;
	bb = b;
	while (x < len)
	{
		bb[x] = k;
		x++;
	}
	return (bb);
}
