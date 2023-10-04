/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eydupray <eydupray@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/06 13:15:15 by eydupray          #+#    #+#             */
/*   Updated: 2021/01/07 16:01:45 by eydupray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t size)
{
	unsigned int i;
	unsigned int j;
	unsigned int srcsize;
	unsigned int dstsize;

	i = 0;
	j = 0;
	srcsize = 0;
	while (src[srcsize])
		srcsize++;
	while (dst[i])
		i++;
	dstsize = i;
	if (size > 0)
	{
		while (src[j] && i < size - 1)
		{
			dst[i] = src[j++];
			i++;
		}
		dst[i] = '\0';
	}
	if (size >= dstsize)
		return (srcsize + dstsize);
	return (srcsize + size);
}
