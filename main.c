/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flora_nyah <flora_nyah@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/05 16:40:29 by fmartins          #+#    #+#             */
/*   Updated: 2026/06/28 14:51:54 by flora_nyah       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

int main(int argc, char **argv)
{
	int			*arr;
	t_list		*stack;
	t_list		*stackb;
	t_list		*curr;
	t_config	*config = malloc(sizeof (t_config));

	parse_flags(argc, argv, config);
	arr = parse_args(argc, argv, *config);
	stack = stack_init(arr, argc - config->first_arg);
	stackb = stack_init(arr, 0);
	curr = stack;
	while (curr)
	{
		ft_printf("%d\n", *(int *)(curr->content));
		curr = curr->next;
	}
	ft_printf("\n");
	printf("Disorder: %f\n", compute_disorder(stack));
	printf("ordered = %d\n", ordered(stack, stackb));
	printf("partially ordered = %d\n", part_order(&stack, &stackb));
	curr = stack;
	while (curr)
	{
		ft_printf("%d\n", *(int *)(curr->content));
		curr = curr->next;
	}
	simple_sort(&stack, &stackb, config);
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
