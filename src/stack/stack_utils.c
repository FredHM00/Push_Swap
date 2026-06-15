/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flora_nyah <flora_nyah@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/05 16:41:19 by fmartins          #+#    #+#             */
/*   Updated: 2026/06/15 18:38:20 by flora_nyah       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"

int	stack_max(t_list **stack)
{
	int		max;
	t_list	*current;

	max = *((int *)((*stack)->content));
	current = *stack;
	while (current)
	{
		if (*(int *)(current->content) > max)
			max = *(int *)(current->content);
		current = current->next;
	}
	return (max);
}

ssize_t	ft_lstindex(t_list *list, int n)
{
	size_t	index;

	index = 0;
	while (list)
	{
		if (*((int *)list->content) == n)
			return (index);
		list = list->next;
		index++;
	}
	return (-1);
}
