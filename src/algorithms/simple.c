/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   simple.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flora_nyah <flora_nyah@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/05 16:40:39 by fmartins          #+#    #+#             */
/*   Updated: 2026/06/28 15:22:22 by flora_nyah       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "algo.h"
#include <stdio.h>

void	rotate_sort(t_list **a, t_list **b, t_config *config)
{
	int			rotations;
	const int	limit = ft_lstsize(*a) / 2;

	if (part_order(a, b))
	{
		rotations = (int) ft_lstindex(*a, stack_min(a));
		if (rotations > limit)
		{
			while (ft_lstsize(*a) - (rotations++))
				move_maker(a, b, config, RRA);
		}
		else
		{
			while (rotations--)
				move_maker(a, b, config, RA);
		}
	}
}

void	simple_sort(t_list **a, t_list **b, t_config *config)
{
	const int	size = ft_lstsize(*a);
	int			i;

	rotate_sort(a, b, config);
	while (compute_disorder(*a) != (float) 0)
	{
		i = 1;
		while (i++ < size)
		{
			if (*(int *)((*a)->content) > *(int *)(((*a)->next)->content))
				move_maker(a, b, config, SA);
			move_maker(a, b, config, RA);
			rotate_sort(a, b, config);
		}
	}
}
