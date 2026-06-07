/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpinheir <fpinheir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/05 16:41:03 by fmartins          #+#    #+#             */
/*   Updated: 2026/06/06 23:53:01 by fpinheir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ops.h"

void	swap(t_list **list)
{
	t_list	*buff;

	buff = (*list)->next;
	(*list)->next = buff->next;
	buff->next = *list;
	*list = buff;
}
