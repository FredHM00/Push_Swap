/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bench.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmartins <fmartins@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/05 16:40:04 by fmartins          #+#    #+#             */
/*   Updated: 2026/06/10 18:58:41 by fmartins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BENCH_H
# define BENCH_H
# include "libft.h"
# include <float.h>

float	compute_disorder(t_list	*list);

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