/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpinheir <fpinheir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/18 16:22:57 by fpinheir          #+#    #+#             */
/*   Updated: 2026/05/27 11:56:52 by fpinheir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_abs(int n)
{
	if ((n < 0) && (n != (-INT_MAX) - 1))
		return (-n);
	return (n);
}

static void	ft_strnbr(int nb, char *str, int index)
{
	char	print;

	if ((nb > (-10)) && (nb < 10))
	{
		if (nb < 0)
			str[0] = '-';
		print = '0' + ft_abs(nb);
		str[index] = print;
	}
	else
	{
		ft_strnbr(nb / 10, str, index - 1);
		print = '0' + ft_abs(nb % 10);
		str[index] = print;
	}
}

char	*ft_itoa(int n)
{
	int		temp;
	int		size;
	char	*num;

	temp = n;
	size = 1;
	while (temp / 10)
	{
		temp /= 10;
		size++;
	}
	if (n < 0)
		size++;
	num = ft_calloc(size + 1, sizeof (char));
	ft_strnbr(n, num, size - 1);
	return (num);
}
/*
#include <stdio.h>
int	main(void)
{
	char	*num;
	int		i;

	i = -100;
	while (i < 101)
	{
		num = ft_itoa(i);
		printf("%s\n", num);
		free(num);
		i++;
	}
}*/
