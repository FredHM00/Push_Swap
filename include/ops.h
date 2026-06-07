/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ops.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpinheir <fpinheir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/05 16:40:07 by fmartins          #+#    #+#             */
/*   Updated: 2026/06/06 23:40:24 by fpinheir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef OPS_H
# define OPS_H
# include "libft.h"

void	swap(t_list **list);
void	push(t_list **src, t_list **dest);
void	rotate(t_list **list);
void	rev_rotate(t_list **list);

#endif
