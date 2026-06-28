/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_maker.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flora_nyah <flora_nyah@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/28 11:57:33 by flora_nyah        #+#    #+#             */
/*   Updated: 2026/06/28 13:16:40 by flora_nyah       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ops.h"

void	move_push(t_list **a, t_list **b, t_move move)
{
	if (move == PA)
		push(b, a);
	if (move == PB)
		push(a, b);
	print_move(move);
}

void	move_swap(t_list **a, t_list **b, t_move move)
{
	if (move == SA)
		swap(a);
	if (move == SB)
		swap(b);
	if (move == SS)
	{
		swap(a);
		swap(b);
	}
	print_move(move);
}

void	move_rot(t_list **a, t_list **b, t_move move)
{
	if (move == RA)
		rotate(a);
	if (move == RB)
		rotate(b);
	if (move == RR)
	{
		rotate(a);
		rotate(b);
	}
	print_move(move);
}

void	move_revrot(t_list **a, t_list **b, t_move move)
{
	if (move == RRA)
		rev_rotate(a);
	if (move == RRB)
		rev_rotate(b);
	if (move == RRR)
	{
		rev_rotate(a);
		rev_rotate(b);
	}
	print_move(move);
}

void	move_maker(t_list **a, t_list **b, t_config *config, t_move move)
{
	if (config->bench == 1)
		op_counter(move);
	if ((move / 3) == 0)
		move_swap(a, b, move);
	if ((move / 3) == 1)
		move_rot(a, b, move);
	if ((move / 3) == 2)
		move_revrot(a, b, move);
	if ((move / 3) == 3)
		move_push(a, b, move);
}
