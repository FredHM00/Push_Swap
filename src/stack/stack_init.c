/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_init.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flora_nyah <flora_nyah@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/05 16:41:17 by fmartins          #+#    #+#             */
/*   Updated: 2026/06/15 16:19:38 by flora_nyah       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"

t_list	**stack_init(void *arr, size_t size)
{
	t_list	**stack;
	t_list	*head;
	t_list	*buff;

	head = NULL;
	stack = ft_calloc(1, sizeof (t_list **));
	if (!stack)
	{
		free(stack);
		return (NULL);
	}
	stack = &head;
	while (size--)
	{
		buff = ft_lstnew(arr++);
		if (!buff)
		{
			ft_lstdelone(buff, free);
			ft_lstclear(&head, free);
			return (NULL);
		}
		ft_lstadd_back(stack, buff);
	}
	return (stack);
}
