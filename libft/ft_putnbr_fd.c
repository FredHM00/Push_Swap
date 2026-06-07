/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpinheir <fpinheir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/18 17:55:55 by fpinheir          #+#    #+#             */
/*   Updated: 2026/05/18 17:58:03 by fpinheir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	my_abs(int num)
{
	if (num < 0)
		return (-num);
	return (num);
}

void	ft_putnbr_fd(int n, int fd)
{
	char	print;

	if ((n > (-10)) && (n < 10))
	{
		if (n < 0)
			write(fd, "-", 1);
		print = '0' + my_abs(n);
		write(fd, &print, 1);
	}
	else
	{
		ft_putnbr_fd(n / 10, fd);
		print = '0' + my_abs(n % 10);
		write(fd, &print, 1);
	}
}
