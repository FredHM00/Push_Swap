/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flora_nyah <flora_nyah@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/18 18:11:00 by fpinheir          #+#    #+#             */
/*   Updated: 2026/06/19 18:12:45 by flora_nyah       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = ft_calloc(1, sizeof (t_list));
	new->content = content;
	new->next = NULL;
	return (new);
}

t_dl_list	*ft_dl_lstnew(void *content)
{
	t_dl_list	*new;

	new = ft_calloc(1, sizeof (t_dl_list));
	new->content = content;
	new->next = NULL;
	new->prev = NULL;
	return (new);
}
