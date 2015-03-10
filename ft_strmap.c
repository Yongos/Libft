/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysoutham <ysoutham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/14 11:46:38 by ysoutham          #+#    #+#             */
/*   Updated: 2014/11/14 12:28:52 by ysoutham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*g;
	int		a;

	a = 0;
	if (s && f)
	{
		g = (char *)malloc(sizeof(char) * ft_strlen((char *)s));
		if (g != NULL)
		{
			while (s[a])
			{
				g[a] = (*f)(s[a]);
				a++;
			}
			g[a] = '\0';
			return (g);
		}
	}
	return (NULL);
}
