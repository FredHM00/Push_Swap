/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ops.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flora_nyah <flora_nyah@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/05 16:40:07 by fmartins          #+#    #+#             */
/*   Updated: 2026/06/28 13:13:56 by flora_nyah       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef OPS_H
# define OPS_H
# include "bench.h"
# include "libft.h"

void	push(t_list **src, t_list **dest);
void	swap(t_list **list);
void	rotate(t_list **list);
void	rev_rotate(t_list **list);

void	move_maker(t_list **a, t_list **b, t_config *config, t_move move);

#endif
