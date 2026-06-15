/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strategy_flags.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmartins <fmartins@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/05 16:41:09 by fmartins          #+#    #+#             */
/*   Updated: 2026/06/10 19:49:53 by fmartins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_strategy	get_strategy(char *flag)
{
	if (ft_strncmp("--adaptive", flag, 12) == 0)
		return (ADAPTIVE);
	else if (ft_strncmp("--simple", flag, 9) == 0)
		return (SIMPLE);
	else if (ft_strncmp("--medium", flag, 9) == 0)
		return (MEDIUM);
	else if (ft_strncmp("--complex", flag, 10) == 0)
		return (COMPLEX);
	return (INVALID);
}

int	parse_flags(int ac, char **av, t_config *config)
{
	config->bench = 0;
	config->strategy = ADAPTIVE;
	config->first_arg = 1;
	if (ac <= 1)
		return (1);
	if (ac > 1 && ft_strncmp(av[1], "--bench", 8) == 0)
	{
		config->bench = 1;
		config->first_arg = 2;
		if (ac > 2 && (ft_strncmp(av[2], "--", 2) == 0))
		{
			config->strategy = get_strategy(av[2]);
			config->first_arg = 3;
		}
	}
	else if (ac > 1 && ft_strncmp(av[1], "--", 2) == 0)
	{
		config->strategy = get_strategy(av[1]);
		config->first_arg = 2;
		if (ac > 2 && ft_strncmp(av[2], "--", 2) == 0)
			return (error());
	}
	if (config->strategy == INVALID)
		return (error());
	return (1);
}
