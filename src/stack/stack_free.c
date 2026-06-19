/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_free.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flora_nyah <flora_nyah@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/05 16:41:15 by fmartins          #+#    #+#             */
/*   Updated: 2026/06/19 19:11:46 by flora_nyah       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"

void	stack_free(t_list **stack)
{
	if ((*stack)->next)
		stack_free(&((*stack)->next));
	free(*stack);
	*stack = NULL;
}
