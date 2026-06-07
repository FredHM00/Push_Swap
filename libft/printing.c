/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printing.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpinheir <fpinheir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/26 16:36:14 by fpinheir          #+#    #+#             */
/*   Updated: 2026/06/06 16:46:18 by fpinheir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putstr(char *s)
{
	if (s == NULL)
		return (write(1, "(null)", 6));
	return ((int) write(1, s, ft_strclen(s, '\0')));
}

int	ft_putchar(int num)
{
	return (write(1, &num, 1));
}

int	ft_putnbr(int nbr)
{
	long	num;
	int		count;

	num = (long) nbr;
	count = 0;
	if (num < 0)
	{
		count += write(1, "-", 1);
		num = -num;
	}
	if (num >= 10)
		count += ft_putnbr((int)(num / 10));
	count += ft_putchar('0' + (num % 10));
	return (count);
}

int	ft_putunbr(unsigned long nbr, const char *base)
{
	const size_t	len = ft_strclen(base, '\0');
	int				count;

	count = 0;
	if (nbr >= len)
		count += ft_putunbr((nbr / len), base);
	count += write(1, base + (nbr % len), 1);
	return (count);
}

int	ft_putptr(void *ptr)
{
	int			count;
	const char	*hex = "0123456789abcdef";

	if (!ptr)
		return (write(1, "(nil)", 5));
	count = write(1, "0x", 2);
	count += ft_putunbr((unsigned long)ptr, hex);
	return (count);
}
