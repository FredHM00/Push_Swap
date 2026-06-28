/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flora_nyah <flora_nyah@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/05 16:41:03 by fmartins          #+#    #+#             */
/*   Updated: 2026/06/28 13:05:34 by flora_nyah       ###   ########.fr       */
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
