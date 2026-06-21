/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   disorder.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flora_nyah <flora_nyah@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/05 16:40:51 by fmartins          #+#    #+#             */
/*   Updated: 2026/06/21 17:14:01 by flora_nyah       ###   ########.fr       */
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
			if (*(int *)(list->content) > *(int *)(current->content))
				mistakes += 1;
			current = current->next;
		}
		list = list->next;
	}
	return (mistakes / total_pairs);
}
