/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysoutham <ysoutham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/05 16:52:25 by ysoutham          #+#    #+#             */
/*   Updated: 2015/03/03 12:55:56 by ysoutham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static size_t	ft_len_split(char const *s, char c)
{
	size_t		len;

	len = 0;
	while (*s != '\0')
	{
		if (*s != c)
		{
			while (*s != c && *s != '\0')
				s++;
			len++;
		}
		else
		{
			while (*s == c && *s != '\0')
				s++;
		}
	}
	return (len);
}

static char		*ft_word(char *s, char c)
{
	char		*str;
	size_t		size_word;

	size_word = 0;
	while (s[size_word] != c && s[size_word] != '\0')
		size_word += 1;
	str = (char *)malloc(sizeof(char) * size_word);
	if (str != NULL)
	{
		ft_strncpy(str, s, size_word);
		str[size_word] = '\0';
	}
	return (str);
}

char			**ft_strsplit(char const *s, char c)
{
	char		**str_split;
	size_t		i;

	if (!s)
		return (NULL);
	str_split = (char **)malloc(sizeof(char *) * ft_len_split(s, c) + 1);
	i = 0;
	while (*s != '\0' && str_split)
	{
		if (*s != c)
		{
			str_split[i] = ft_word((char *)s, c);
			i++;
			while (*s != c && *s != '\0')
				s++;
		}
		if (*s != '\0')
			s++;
		str_split[i] = NULL;
	}
	return (str_split);
}
