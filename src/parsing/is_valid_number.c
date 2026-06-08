/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_valid_number.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmartins <fmartins@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/08 15:30:47 by fmartins          #+#    #+#             */
/*   Updated: 2026/06/08 20:23:58 by fmartins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/push_swap.h"

void	error(void)
{
	ft_putendl_fd("Error", 1);
}

int	check_int(long num)
{
	if (num > INT_MAX || num < INT_MIN)
		return (0);
	return (1);
}

int	check_str(const char *str)
{
	int		sign;
	int		num;
	long	count;

	sign = 1;
	num = 0;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	count = 0;
	while ((*str >= '0') && (*str <= '9'))
	{
		count = (count * 10) + (*str - '0');
		str++;
		num += 1;
	}
	if ((num <= 0) || (*str))
		return (0);
	if (check_int(count * sign))
		return (1);
	return (0);
}

int	is_valid_number(int ac, char **av)
{
	int	i;

	i = 1;
	while (i < ac)
	{
		if (!check_str(av[i]))
		{
			error();
			return (0);
		}
		i++;
	}
	return (1);
}
