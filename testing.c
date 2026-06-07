/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpinheir <fpinheir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/06 23:40:39 by fpinheir          #+#    #+#             */
/*   Updated: 2026/06/06 23:49:02 by fpinheir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int argc, char **argv)
{
	t_list	*start = ft_lstnew(ft_strdup("Start: "));
	t_list	**ptr = &start;
	t_list	*curr = start;
	int		i;

	if (argc < 2)
		return (0);
	i = 1;
	while (i < argc)
		ft_lstadd_back(ptr, ft_lstnew(ft_strdup(argv[i++])));
	while (curr)
	{
		ft_printf("%s\n", (char *)(curr->content));
		curr = curr->next;
	}
	write(1, "\n", 1);
	swap(ptr);
	curr = *ptr;
	while (curr)
	{
		ft_printf("%s\n", (char *)(curr->content));
		curr = curr->next;
	}
	write(1, "\n", 1);
	rotate(ptr);
	curr = *ptr;
	while (curr)
	{
		ft_printf("%s\n", (char *)(curr->content));
		curr = curr->next;
	}
	write(1, "\n", 1);
	rev_rotate(ptr);
	curr = *ptr;
	while (curr)
	{
		ft_printf("%s\n", (char *)(curr->content));
		curr = curr->next;
	}
	write(1, "\n", 1);
	swap(ptr);
	curr = *ptr;
	while (curr)
	{
		ft_printf("%s\n", (char *)(curr->content));
		curr = curr->next;
	}
	ft_lstclear(ptr, free);
	return (0);
}
