/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eydupray <eydupray@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/06 15:52:09 by eydupray          #+#    #+#             */
/*   Updated: 2021/01/15 14:54:22 by eydupray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_plop(char *ret)
{
	if (!(ret = malloc(sizeof(char))))
		return (NULL);
	ret[0] = '\0';
	return (ret);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*ret;
	unsigned int	i;
	unsigned int	j;

	j = 0;
	i = 0;
	ret = NULL;
	while (s[i])
		i++;
	if (i <= start)
		return (ft_plop(ret));
	i = 0;
	if (!(ret = malloc(len * sizeof(char) + 1)))
		return (NULL);
	while (i < start)
		i++;
	while (i < start + len)
	{
		ret[j] = s[i];
		j++;
		i++;
	}
	ret[j] = '\0';
	return (ret);
}
