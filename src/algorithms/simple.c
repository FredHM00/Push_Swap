/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   simple.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flora_nyah <flora_nyah@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/05 16:40:39 by fmartins          #+#    #+#             */
/*   Updated: 2026/06/28 13:19:06 by flora_nyah       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "algo.h"
#include <stdio.h>

void	simple_sort(t_list **a, t_list **b, t_config *config)
{
	const int	size = ft_lstsize(*a);
	int			i;

	while (compute_disorder(*a) != (float) 0)
	{
		i = 1;
		while (i++ < size)
		{
			if (*(int *)((*a)->content) > *(int *)(((*a)->next)->content))
				move_maker(a, b, config, SA);
			move_maker(a, b, config, RA);
		}
		i = 1;
		move_maker(a, b, config, RRA);
		while (i++ < size)
		{
			if (*(int *)((*a)->content) > *(int *)(((*a)->next)->content))
				move_maker(a, b, config, SA);
			move_maker(a, b, config, RRA);
		}
		move_maker(a, b, config, RA);
	}
}
