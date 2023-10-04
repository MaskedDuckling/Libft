/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/08 10:40:14 by eydupray          #+#    #+#             */
/*   Updated: 2021/01/20 11:17:03 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list *ret;

	if (new == 0)
		return ;
	if (*alst == 0)
		*alst = new;
	else
	{
		ret = *alst;
		while (ret->next)
			ret = ret->next;
		ret->next = new;
	}
}
