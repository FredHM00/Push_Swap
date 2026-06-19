/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_init.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flora_nyah <flora_nyah@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/05 16:41:17 by fmartins          #+#    #+#             */
/*   Updated: 2026/06/19 19:11:58 by flora_nyah       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"

#include <stdio.h>

t_list	*stack_init(int *arr, int size)
{
	t_list	**stack;
	t_list	*head;
	t_list	*buff;

	head = NULL;
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
	return (head);
}
