/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eydupray <eydupray@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/08 11:19:23 by eydupray          #+#    #+#             */
/*   Updated: 2021/01/08 11:49:57 by eydupray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *ret;

	if (!lst || !f)
		return (NULL);
	if (!(ret = ft_lstnew(f(lst->content))))
	{
		ft_lstclear(&ret, del);
		return (NULL);
	}
	while (lst)
	{
		ft_lstadd_back(&ret, ft_lstnew(f(lst->content)));
		lst = lst->next;
	}
	return (ret);
}
