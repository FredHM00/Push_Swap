/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpinheir <fpinheir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/16 20:04:18 by fpinheir          #+#    #+#             */
/*   Updated: 2026/05/16 23:13:15 by fpinheir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int	sign;
	int	count;

	while (((*str >= '\t') && (*str <= '\r')) || (*str == ' '))
		str++;
	sign = 0;
	if (*str == '+')
		str++;
	else if (*str == '-')
	{
		sign = 1;
		str++;
	}
	count = 0;
	while ((*str >= '0') && (*str <= '9'))
	{
		count = (count * 10) + (*str - '0');
		str++;
	}
	if (sign)
		return (-count);
	return (count);
}
