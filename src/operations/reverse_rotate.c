/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpinheir <fpinheir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/05 16:40:59 by fmartins          #+#    #+#             */
/*   Updated: 2026/06/06 23:54:59 by fpinheir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ops.h"

void	rev_rotate(t_list **list)
{
	t_list	**i;

	i = list;
	while ((*i)->next)
		i = &((*i)->next);
	ft_lstadd_front(list, ft_lstnew((*i)->content));
	free(*i);
	*i = NULL;
}
