/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flora_nyah <flora_nyah@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/05 16:40:56 by fmartins          #+#    #+#             */
/*   Updated: 2026/06/28 13:16:37 by flora_nyah       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ops.h"

void	push(t_list **src, t_list **dest)
{
	t_list	*buff;

	buff = *src;
	*src = buff->next;
	buff->next = *dest;
	*dest = buff;
}
