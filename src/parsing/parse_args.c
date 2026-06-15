/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmartins <fmartins@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/05 16:41:07 by fmartins          #+#    #+#             */
/*   Updated: 2026/06/10 19:43:10 by fmartins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
				return (error());
			j++;
		}
		i++;
	}
	return (1);
}

int	*parse_args(int ac, char **av, t_config config)
{
	int			*numbers;
	int			i;
	int			j;
	size_t		size;

	i = config.first_arg;
	j = 0;
	size = ac - config.first_arg;
	numbers = ft_calloc(size, sizeof(int));
	while (i < ac)
	{
		if (!check_str(av[i]))
		{
			free(numbers);
			ft_putendl_fd("Error", 2);
			return (NULL);
		}
		numbers[j] = ft_atoi(av[i]);
		i++;
		j++;
	}
	return (numbers);
}
