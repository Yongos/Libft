/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysoutham <ysoutham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 12:52:53 by ysoutham          #+#    #+#             */
/*   Updated: 2014/11/14 16:22:33 by ysoutham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strchr(const char *s, int c)
{
	int		x;
	char	g;

	x = 0;
	g = (char)c;
	while (s[x] != '\0' && s[x] != g)
		x++;
	if (s[x] == g)
		return ((char *)s + x);
	return (NULL);
}
