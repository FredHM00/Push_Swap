/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   simple.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flora_nyah <flora_nyah@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/05 16:40:39 by fmartins          #+#    #+#             */
/*   Updated: 2026/06/21 17:10:12 by flora_nyah       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "algo.h"
#include <stdio.h>

void	simple_sort(t_list **a)
{
	const int	size = ft_lstsize(*a);
	int			i;

	while (compute_disorder(*a) != (float) 0)
	{
		printf("Disorder: %f\n", compute_disorder(*a));
		i = 1;
		while (i++ < size)
		{
			if (*(int *)((*a)->content) > *(int *)(((*a)->next)->content))
			{
				ft_printf("sa\n");
				swap(a);
			}
			ft_printf("ra\n");
			rotate(a);
		}
		i = 1;
		ft_printf("rra\n");
		rev_rotate(a);
		while (i++ < size)
		{
			if (*(int *)((*a)->content) > *(int *)(((*a)->next)->content))
			{
				ft_printf("sa\n");
				swap(a);
			}
			ft_printf("rra\n");
			rev_rotate(a);
		}
		ft_printf("ra\n");
		rotate(a);
	}
}
