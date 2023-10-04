/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/05 17:40:02 by eydupray          #+#    #+#             */
/*   Updated: 2021/01/20 11:16:42 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	unsigned char		*newdst;
	unsigned char		*newsrc;

	newdst = (unsigned char *)dst;
	newsrc = (unsigned char *)src;
	if (newdst == NULL && newsrc == NULL)
		return (0);
	while (n > 0)
	{
		newdst[n - 1] = newsrc[n - 1];
		n--;
	}
	return (dst);
}
