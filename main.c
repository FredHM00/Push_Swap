/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flora_nyah <flora_nyah@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/05 16:40:29 by fmartins          #+#    #+#             */
/*   Updated: 2026/06/19 19:10:17 by flora_nyah       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(void)
{
	int			arr[5] = {8, 3, 6, 4, 5};
	t_list		*stack;
	t_list		*curr;

	stack = stack_init(arr, 5);
	curr = stack;
	while (curr)
	{
		ft_printf("%d\n", *(int *)(curr->content));
		curr = curr->next;
	}
	stack_free(&stack);
}
