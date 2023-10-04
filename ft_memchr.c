/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eydupray <eydupray@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/06 11:54:30 by eydupray          #+#    #+#             */
/*   Updated: 2021/01/07 15:19:40 by eydupray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*news;
	unsigned int	i;

	i = 0;
	news = (unsigned char *)s;
	while (i < n)
	{
		if (news[i] == (unsigned char)c)
			return ((void *)s + i);
		i++;
	}
	return (NULL);
}
