/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysoutham <ysoutham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/14 12:37:38 by ysoutham          #+#    #+#             */
/*   Updated: 2014/11/14 12:45:26 by ysoutham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*g;
	int		a;
	int		i;

	a = 0;
	i = 0;
	if (s && f)
	{
		g = (char *)malloc(sizeof(char) * ft_strlen((char *)s));
		if (g != NULL)
		{
			while (s[a])
			{
				g[i] = (*f)(i, s[a]);
				a++;
				i++;
			}
			g[a] = '\0';
			return (g);
		}
	}
	return (NULL);
}
