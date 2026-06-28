/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flora_nyah <flora_nyah@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/05 16:41:19 by fmartins          #+#    #+#             */
/*   Updated: 2026/06/28 14:56:31 by flora_nyah       ###   ########.fr       */
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

int	stack_min(t_list **stack)
{
	int		min;
	t_list	*current;

	min = *((int *)((*stack)->content));
	current = *stack;
	while (current)
	{
		if (*(int *)(current->content) < min)
			min = *(int *)(current->content);
		current = current->next;
	}
	return (min);
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

int	ordered(t_list *a, t_list *b)
{
	if ((a != NULL) && (b == NULL))
	{
		while (a->next)
		{
			if (*(int *)(a->content) > *(int *)a->next->content)
				return (0);
			a = a->next;
		}
		return (1);
	}
	return (0);
}

int	part_order(t_list **a, t_list **b)
{
	const int	min = stack_min(a);
	int			rotations;
	int			order;

	rotations = 0;
	while (*(int *)((*a)->content) != min)
	{
		rotate(a);
		rotations++;
	}
	order = ordered(*a, *b);
	while (rotations--)
		rev_rotate(a);
	return (order);
}
