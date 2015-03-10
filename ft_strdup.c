/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysoutham <ysoutham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 10:09:25 by ysoutham          #+#    #+#             */
/*   Updated: 2014/11/04 10:31:01 by ysoutham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char		*ft_strdup(char *src)
{
	int		x;
	int		y;
	char	*dest;

	x = 0;
	y = 0;
	if (src == NULL)
	{
		return (NULL);
	}
	while (src[x] != '\0')
	{
		x++;
	}
	x++;
	dest = (char*)malloc(sizeof(*dest) * (x));
	while (src[y] != '\0')
	{
		dest[y] = src[y];
		y++;
	}
	dest[y] = '\0';
	return (dest);
}
