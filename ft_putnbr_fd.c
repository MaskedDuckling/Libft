/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eydupray <eydupray@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/07 15:46:54 by eydupray          #+#    #+#             */
/*   Updated: 2021/01/07 15:57:12 by eydupray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char			c;
	unsigned int	b;

	if (n < 0)
	{
		write(fd, "-", 1);
		n = n * -1;
	}
	b = n;
	if (b >= 10)
	{
		ft_putnbr_fd(b / 10, fd);
	}
	c = b % 10 + 48;
	write(fd, &c, 1);
}
