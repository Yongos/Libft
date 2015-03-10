/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysoutham <ysoutham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/12 17:00:41 by ysoutham          #+#    #+#             */
/*   Updated: 2014/11/14 17:41:03 by ysoutham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	int x;
	int y;
	int i;

	if (s != NULL && f != NULL)
	{
		x = 0;
		y = 0;
		i = 0;
		while (s[x] != '\0')
			x++;
		while (y < x)
		{
			(*f)(i, s);
			s++;
			y++;
			i++;
		}
	}
}
