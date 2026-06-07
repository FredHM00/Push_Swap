/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpinheir <fpinheir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/05 16:40:56 by fmartins          #+#    #+#             */
/*   Updated: 2026/06/06 23:52:46 by fpinheir         ###   ########.fr       */
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
