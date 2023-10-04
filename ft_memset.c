/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eydupray <eydupray@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/16 17:44:51 by eydupray          #+#    #+#             */
/*   Updated: 2021/01/15 14:53:19 by eydupray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned int	i;
	unsigned char	newc;
	unsigned char	*news;

	news = (unsigned char *)b;
	newc = (unsigned char)c;
	i = 0;
	while (i < len)
	{
		news[i] = newc;
		i++;
	}
	return (b);
}
