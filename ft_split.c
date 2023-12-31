/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eydupray <eydupray@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/07 11:45:02 by eydupray          #+#    #+#             */
/*   Updated: 2021/01/19 16:37:14 by eydupray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_wordmalloc(char const *s, char c, int i, char *ret)
{
	int j;

	j = 0;
	while (s[i] != c && s[i])
	{
		j++;
		i++;
	}
	if (!(ret = malloc(sizeof(char) * (j + 1))))
		return (0);
	return (ret);
}

int		ft_wordput(char const *s, char c, int i, char *ret)
{
	int j;

	j = 0;
	while (s[i] != c && s[i])
	{
		ret[j] = s[i];
		j++;
		i++;
	}
	ret[j] = '\0';
	return (j);
}

int		ft_skip(const char *s, char c, int i)
{
	while (s[i] == c && s[i])
		i++;
	return (i);
}

int		ft_wordcount(char const *s, char c, int wc)
{
	int i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c && s[i + 1] != c && s[i + 1] != '\0')
			wc++;
		i++;
	}
	if ((wc == 1 && s[0] == c))
		return (wc);
	return (wc + 1);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		wc;
	char	**ret;

	i = 0;
	j = 0;
	wc = 0;
	if (!s)
		return (NULL);
	wc = ft_wordcount(s, c, wc);
	if (!(ret = malloc(sizeof(char *) * (wc + 1))))
		return (NULL);
	i = 0;
	while (j < wc && s[i])
	{
		i = ft_skip(s, c, i);
		if (!s[i])
			break ;
		ret[j] = ft_wordmalloc(s, c, i, ret[j]);
		i += ft_wordput(s, c, i, ret[j]);
		j++;
	}
	ret[j] = 0;
	return (ret);
}
