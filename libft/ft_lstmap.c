/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpinheir <fpinheir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/19 20:28:14 by fpinheir          #+#    #+#             */
/*   Updated: 2026/05/19 21:04:51 by fpinheir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*head;
	t_list	*buff;

	head = NULL;
	while (lst)
	{
		buff = ft_lstnew((*f)(lst->content));
		if (!buff)
		{
			ft_lstdelone(buff, del);
			ft_lstclear(&head, del);
			return (NULL);
		}
		ft_lstadd_back(&head, buff);
		lst = lst->next;
	}
	return (head);
}
