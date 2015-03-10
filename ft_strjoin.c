/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysoutham <ysoutham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/15 16:20:03 by ysoutham          #+#    #+#             */
/*   Updated: 2014/11/17 18:33:38 by ysoutham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
	char	*plop;
	size_t	len;
	int		x;
	int		y;

	x = 0;
	y = 0;
	if (s1 && s2)
	{
		len = ft_strlen(s1) + ft_strlen(s2);
		plop = ft_strnew(len + 1);
		while (s1[x] != '\0')
		{
			plop[x] = s1[x];
			x++;
		}
		while (s2[y] != '\0')
		{
			plop[x] = s2[y];
			y++;
			x++;
		}
		return (plop);
	}
	return (NULL);
}
