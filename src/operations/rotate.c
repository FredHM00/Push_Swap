/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flora_nyah <flora_nyah@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/05 16:41:01 by fmartins          #+#    #+#             */
/*   Updated: 2026/06/28 13:05:32 by flora_nyah       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ops.h"

void	rotate(t_list **list)
{
	t_list	*buff;

	buff = (*list)->next;
	ft_lstadd_back(list, *list);
	(*list)->next = NULL;
	*list = buff;
}
