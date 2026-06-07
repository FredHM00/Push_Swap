/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   disorder.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmartins <fmartins@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/05 16:40:51 by fmartins          #+#    #+#             */
/*   Updated: 2026/06/05 16:40:52 by fmartins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bench.h"

float	compute_disorder(t_list	*list)
{
	float	mistakes;
	float	total_pairs;
	t_list	*current;

	mistakes = 0;
	total_pairs = 0;
	while (list)
	{
		current = list->next;
		while (current)
		{
			total_pairs += 1;
			if (list->content > current->next)
				mistakes += 1;
		}
		list = list->next;
	}
	return (mistakes / total_pairs);
}

