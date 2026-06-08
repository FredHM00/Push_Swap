/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmartins <fmartins@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/05 16:41:07 by fmartins          #+#    #+#             */
/*   Updated: 2026/06/08 20:22:35 by fmartins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/push_swap.h"

int	is_duplicate(int *arr, int ac)
{
	int	i;
	int	j;
	int	size;

	i = 0;
	size = ac - 1;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (arr[i] == arr[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	*parse_args(int ac, char **av)
{
	int		*numbers;
	int		i;
	int		j;
	size_t	size;

	i = 1;
	j = 0;
	size = ac - 1;
	numbers = ft_calloc(sizeof(int), size);
	while (i < ac)
	{
		if (!check_str(av[i]))
		{
			error();
			free(numbers);
			return (NULL);
		}
		numbers[j] = ft_atoi(av[i]);
		i++;
		j++;
	}
	return (numbers);
}
