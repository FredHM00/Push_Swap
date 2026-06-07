/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpinheir <fpinheir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/19 23:50:32 by fpinheir          #+#    #+#             */
/*   Updated: 2026/06/06 16:51:38 by fpinheir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strclen(const char *str, char c)
{
	size_t	i;

	i = 0;
	while (str[i] && (str[i] != c))
		i++;
	return (i);
}

static int	ft_format(const char *str_ptr, va_list *arg_ptr)
{
	int			len;
	const char	*hex = "0123456789abcdef";
	const char	*big_hex = "0123456789ABCDEF";

	len = 0;
	if (*str_ptr == 'c')
		len += ft_putchar((char)va_arg(*arg_ptr, int));
	if (*str_ptr == 's')
		len += ft_putstr(va_arg(*arg_ptr, char *));
	if (*str_ptr == 'p')
		len += ft_putptr(va_arg(*arg_ptr, void *));
	if ((*str_ptr == 'd') || (*str_ptr == 'i'))
		len += ft_putnbr(va_arg(*arg_ptr, int));
	if (*str_ptr == 'u')
		len += ft_putunbr((size_t)va_arg(*arg_ptr, unsigned int), "0123456789");
	if (*str_ptr == 'x')
		len += ft_putunbr((size_t)va_arg(*arg_ptr, unsigned int), hex);
	if (*str_ptr == 'X')
		len += ft_putunbr((size_t)va_arg(*arg_ptr, unsigned int), big_hex);
	if (*str_ptr == '%')
		len += write(1, "%", 1);
	return (len);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	size_t	to_write;
	int		total;

	va_start(args, str);
	total = 0;
	while (*str)
	{
		if (*str == '%')
		{
			str++;
			total += ft_format(str, &args);
			if (*str)
				str++;
		}
		to_write = ft_strclen(str, '%');
		write(1, str, to_write);
		str += to_write;
		total += to_write;
	}
	va_end(args);
	return (total);
}
