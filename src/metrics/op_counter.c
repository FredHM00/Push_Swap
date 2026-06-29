/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_counter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flora_nyah <flora_nyah@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/05 16:40:54 by fmartins          #+#    #+#             */
/*   Updated: 2026/06/29 16:03:31 by flora_nyah       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bench.h"

void	op_counter(t_move move)
{
	static int	counter[11];

	counter[move]++;
}

void	print_move(t_move move)
{
	if (move == PA)
		write(1, "pa\n", 3);
	if (move == PB)
		write(1, "pb\n", 3);
	if (move == SA)
		write(1, "sa\n", 3);
	if (move == SB)
		write(1, "sb\n", 3);
	if (move == SS)
		write(1, "ss\n", 3);
	if (move == RA)
		write(1, "ra\n", 3);
	if (move == RB)
		write(1, "rb\n", 3);
	if (move == RR)
		write(1, "rr\n", 3);
	if (move == RRA)
		write(1, "rra\n", 4);
	if (move == RRB)
		write(1, "rrb\n", 4);
	if (move == RRR)
		write(1, "rrr\n", 4);
	op_counter(move);
}
