/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fiheaton <fiheaton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/11 11:03:41 by fheaton-          #+#    #+#             */
/*   Updated: 2024/05/14 13:25:15 by fiheaton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	ft_lstnext(t_list *a, t_list b)
{
	*a = b;
	return (b);
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*ret;
	t_list	*aux;

	if (!lst)
		return (NULL);
	ret = ft_lstnew(f(lst->content));
	aux = ret;
	lst = lst->next;
	while (lst && aux)
	{
		aux->next = ft_lstnew(f(lst->content));
		aux = aux->next;
		lst = lst->next;
	}
	if (!aux)
	{
		ft_lstclear(&ret, del);
		ret = NULL;
	}
	return (ret);
}
