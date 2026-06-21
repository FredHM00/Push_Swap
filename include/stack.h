/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flora_nyah <flora_nyah@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/05 16:40:12 by fmartins          #+#    #+#             */
/*   Updated: 2026/06/20 01:55:17 by flora_nyah       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STACK_H
# define STACK_H
# include "push_swap.h"

t_list	*stack_init(int *arr, int size);
void	stack_free(t_list **stack);
int		ordered(t_list **list);

#endif
