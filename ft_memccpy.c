/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eydupray <eydupray@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/06 10:33:16 by eydupray          #+#    #+#             */
/*   Updated: 2021/01/07 15:19:23 by eydupray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *restrict dst,
const void *restrict src, int c, size_t n)
{
	unsigned long int	i;
	unsigned char		*newdst;
	unsigned char		*newsrc;

	i = 0;
	newdst = (unsigned char *)dst;
	newsrc = (unsigned char *)src;
	if (newdst == NULL && newsrc == NULL)
		return (0);
	while (i < n)
	{
		newdst[i] = newsrc[i];
		if (newsrc[i] == (unsigned char)c)
			return ((void *)&newdst[i + 1]);
		i++;
	}
	return (NULL);
}
