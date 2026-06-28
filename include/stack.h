/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flora_nyah <flora_nyah@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/05 16:40:12 by fmartins          #+#    #+#             */
/*   Updated: 2026/06/28 15:08:01 by flora_nyah       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STACK_H
# define STACK_H
# include "libft.h"
# include "bench.h"
# include "ops.h"

t_list	*stack_init(int *arr, int size);
void	stack_free(t_list **stack);
int		ordered(t_list *a, t_list *b);
int		part_order(t_list **a, t_list **b);

ssize_t	ft_lstindex(t_list *list, int n);
int		stack_min(t_list **stack);
int		stack_max(t_list **stack);

#endif
