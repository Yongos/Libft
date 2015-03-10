/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysoutham <ysoutham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/14 17:37:59 by ysoutham          #+#    #+#             */
/*   Updated: 2014/11/17 18:23:38 by ysoutham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	int g;

	if (s1 && s2)
	{
		g = (ft_strncmp(s1, s2, n));
		if (g == 0)
			return (1);
		return (0);
	}
	return (2);
}
