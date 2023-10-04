/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/07 14:12:05 by eydupray          #+#    #+#             */
/*   Updated: 2021/01/20 11:16:23 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		isset(char c, char const *set)
{
	int i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

int		trimstart(char const *s1, char const *set)
{
	int i;
	int ret;

	i = 0;
	ret = 0;
	while (s1[i])
	{
		if (isset(s1[i], set) == 1)
			ret++;
		else
			return (ret);
		i++;
	}
	return (ret);
}

int		trimend(char const *s1, char const *set, int len)
{
	int i;
	int ret;

	i = len - 1;
	ret = 0;
	while (i > 0)
	{
		if (isset(s1[i], set) == 1)
			ret++;
		else
			return (ret);
		i--;
	}
	return (ret);
}

char	*rtnl(char *ret)
{
	if (!(ret = malloc(sizeof(char) * 1)))
		return (NULL);
	ret[0] = '\0';
	return (ret);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		len;
	char	*ret;
	int		i;
	int		j;

	len = ft_strlen(s1);
	i = 0;
	j = 0;
	ret = NULL;
	if (trimend(s1, set, len) + trimstart(s1, set) > len)
		return (rtnl(ret));
	len = len - (trimend(s1, set, len) + trimstart(s1, set));
	if (!(ret = malloc(sizeof(char) * (len + 1))))
		return (NULL);
	while (isset(s1[i], set) == 1)
		i++;
	while (len > 0)
	{
		ret[j] = s1[i];
		i++;
		j++;
		len--;
	}
	ret[j] = '\0';
	return (ret);
}
