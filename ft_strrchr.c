/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysoutham <ysoutham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/07 11:24:40 by ysoutham          #+#    #+#             */
/*   Updated: 2014/11/14 16:14:58 by ysoutham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strrchr(const char *s, int c)
{
	int		x;
	char	g;

	x = 0;
	g = (char)c;
	while (s[x] != '\0')
		x++;
	while (x != 0 && s[x] != g)
		x--;
	if (s[x] == g)
		return ((char *)s + (x));
	return (NULL);
}
