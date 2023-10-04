/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eydupray <eydupray@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/06 10:59:41 by eydupray          #+#    #+#             */
/*   Updated: 2021/01/07 16:00:58 by eydupray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned int	i;
	unsigned char	*newsrc;
	unsigned char	*newdst;

	i = 0;
	newdst = (unsigned char *)dst;
	newsrc = (unsigned char *)src;
	if (!newsrc && !newdst)
		return (dst);
	if (newdst > newsrc)
	{
		while (len > i)
		{
			newdst[len - 1] = newsrc[len - 1];
			len--;
		}
		return (dst);
	}
	while (i < len)
	{
		newdst[i] = newsrc[i];
		i++;
	}
	return (dst);
}
