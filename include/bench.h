/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bench.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flora_nyah <flora_nyah@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/05 16:40:04 by fmartins          #+#    #+#             */
/*   Updated: 2026/06/28 15:25:47 by flora_nyah       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BENCH_H
# define BENCH_H
# include "libft.h"

typedef enum e_move
{
	SA = 0,
	SB,
	SS,
	RA,
	RB,
	RR,
	RRA,
	RRB,
	RRR,
	PA,
	PB
}t_move;

float	compute_disorder(t_list	*list);
void	print_move(t_move move);
void	op_counter(t_move move);

typedef enum e_strategy
{
	INVALID = -1,
	ADAPTIVE,
	SIMPLE,
	MEDIUM,
	COMPLEX
}t_strategy;

typedef struct s_config
{
	t_strategy	strategy;
	int			bench;
	int			first_arg;
}t_config;

#endif