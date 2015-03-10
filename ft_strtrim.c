/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysoutham <ysoutham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/15 17:04:34 by ysoutham          #+#    #+#             */
/*   Updated: 2015/01/19 14:21:07 by ysoutham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int		len;
	int		start;
	char	*trimmeuse;

	if (s == NULL || *s == '\0')
		return ("");
	start = 0;
	len = ft_strlen(s) - 1;
	trimmeuse = (char *)malloc((len + 1) * sizeof(char *));
	if (trimmeuse == 0)
		return (NULL);
	while (s[start] == ' ' || s[start] == '\n' || s[start] == '\t')
		start++;
	while (s[len] == ' ' || s[len] == '\n' || s[len] == '\t')
		len--;
	if (len <= 0)
	{
		*trimmeuse = '\0';
		return (trimmeuse);
	}
	trimmeuse = ft_strsub(s, start, (len - start + 1));
	trimmeuse[len - start + 1] = '\0';
	return (trimmeuse);
}
