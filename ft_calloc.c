/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/06 14:59:09 by eydupray          #+#    #+#             */
/*   Updated: 2021/01/20 11:16:58 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char			*point;
	unsigned int	i;

	i = 0;
	if (!(point = malloc(size * count)))
		return (NULL);
	while (i < count * size)
	{
		point[i] = 0;
		i++;
	}
	return ((void *)point);
}
