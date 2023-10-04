/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/06 17:21:31 by eydupray          #+#    #+#             */
/*   Updated: 2021/01/20 11:17:02 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_intlen(int n)
{
	int				m;
	unsigned int	nb;

	m = 0;
	nb = 0;
	if (n < 0)
		nb = (unsigned int)-n;
	else
		nb = (unsigned int)n;
	while (nb > 0)
	{
		nb = nb / 10;
		m++;
	}
	return (m);
}

int		ft_abs(int n)
{
	if (n < 0)
		return (1);
	return (0);
}

char	*ft_assign(char *ret, int len, unsigned int neg, int i)
{
	while (len > i)
	{
		ret[len - 1] = (neg % 10) + 48;
		neg = neg / 10;
		len--;
	}
	return (ret);
}

char	*ft_zero(char *ret)
{
	if (!(ret = malloc(sizeof(char) * (2))))
		return (NULL);
	ret[0] = '0';
	ret[1] = '\0';
	return (ret);
}

char	*ft_itoa(int n)
{
	unsigned int	i;
	unsigned int	len;
	unsigned int	neg;
	char			*ret;

	len = ft_intlen(n);
	i = 0;
	ret = NULL;
	if (n == 0)
		return (ft_zero(ret));
	if (!(ret = malloc(sizeof(char) * (len + ft_abs(n) + 1))))
		return (NULL);
	if (ft_abs(n) == 1)
	{
		ret[0] = '-';
		len++;
		i++;
		neg = (unsigned int)-n;
	}
	else
		neg = (unsigned int)n;
	ret[len] = '\0';
	ret = ft_assign(ret, len, neg, i);
	return (ret);
}
