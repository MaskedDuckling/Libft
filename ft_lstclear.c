/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/08 10:54:39 by eydupray          #+#    #+#             */
/*   Updated: 2021/01/20 11:17:04 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*tmplast;

	while (*lst)
	{
		del((*lst)->content);
		tmplast = *lst;
		*lst = (*lst)->next;
		free(tmplast);
	}
	*lst = NULL;
}
