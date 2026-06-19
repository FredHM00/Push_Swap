/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printing.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flora_nyah <flora_nyah@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/26 16:36:14 by fpinheir          #+#    #+#             */
/*   Updated: 2026/06/19 19:48:44 by flora_nyah       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putstr(int fd, char *s)
{
	if (s == NULL)
		return (write(fd, "(null)", 6));
	return ((int) write(fd, s, ft_strclen(s, '\0')));
}

int	ft_putchar(int fd, int num)
{
	return (write(fd, &num, 1));
}

int	ft_putnbr(int fd, int nbr)
{
	long	num;
	int		count;

	num = (long) nbr;
	count = 0;
	if (num < 0)
	{
		count += write(fd, "-", 1);
		num = -num;
	}
	if (num >= 10)
		count += ft_putnbr(fd, (int)(num / 10));
	count += ft_putchar(fd, '0' + (num % 10));
	return (count);
}

int	ft_putunbr(int fd, unsigned long nbr, const char *base)
{
	const size_t	len = ft_strclen(base, '\0');
	int				count;

	count = 0;
	if (nbr >= len)
		count += ft_putunbr(fd, (nbr / len), base);
	count += write(fd, base + (nbr % len), 1);
	return (count);
}

int	ft_putptr(int fd, void *ptr)
{
	int			count;
	const char	*hex = "0123456789abcdef";

	if (!ptr)
		return (write(fd, "(nil)", 5));
	count = write(fd, "0x", 2);
	count += ft_putunbr(fd, (unsigned long)ptr, hex);
	return (count);
}
