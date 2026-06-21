/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flora_nyah <flora_nyah@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/05 16:40:29 by fmartins          #+#    #+#             */
/*   Updated: 2026/06/21 16:21:55 by flora_nyah       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

int main(int argc, char **argv)
{
	int			*arr;
	t_list		*stack;
	t_list		*curr;
	t_config	*config = malloc(sizeof (t_config));

	parse_flags(argc, argv, config);
	arr = parse_args(argc, argv, *config);
	stack = stack_init(arr, argc - config->first_arg);
	curr = stack;
	while (curr)
	{
		ft_printf("%d\n", *(int *)(curr->content));
		curr = curr->next;
	}
	ft_printf("\n");
	printf("Disorder: %f\n", compute_disorder(stack));
	simple_sort(&stack);
	curr = stack;
	while (curr)
	{
		ft_printf("%d\n", *(int *)(curr->content));
		curr = curr->next;
	}
	stack_free(&stack);
	free(arr);
	free(config);
}
