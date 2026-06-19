/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flora_nyah <flora_nyah@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/19 23:50:32 by fpinheir          #+#    #+#             */
/*   Updated: 2026/06/19 19:48:38 by flora_nyah       ###   ########.fr       */
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

static int	ft_format(int fd, const char *str_ptr, va_list *arg_ptr)
{
	int			len;
	const char	*hex = "0123456789abcdef";
	const char	*big_hex = "0123456789ABCDEF";

	len = 0;
	if (*str_ptr == 'c')
		len += ft_putchar(fd, (char)va_arg(*arg_ptr, int));
	if (*str_ptr == 's')
		len += ft_putstr(fd, va_arg(*arg_ptr, char *));
	if (*str_ptr == 'p')
		len += ft_putptr(fd, va_arg(*arg_ptr, void *));
	if ((*str_ptr == 'd') || (*str_ptr == 'i'))
		len += ft_putnbr(fd, va_arg(*arg_ptr, int));
	if (*str_ptr == 'u')
		len += ft_putunbr(fd, (size_t)va_arg(*arg_ptr, unsigned int), "0123456789");
	if (*str_ptr == 'x')
		len += ft_putunbr(fd, (size_t)va_arg(*arg_ptr, unsigned int), hex);
	if (*str_ptr == 'X')
		len += ft_putunbr(fd, (size_t)va_arg(*arg_ptr, unsigned int), big_hex);
	if (*str_ptr == '%')
		len += write(fd, "%", 1);
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
			total += ft_format(1, str, &args);
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

int	ft_printf_fd(int fd, const char *str, ...)
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
			total += ft_format(fd, str, &args);
			if (*str)
				str++;
		}
		to_write = ft_strclen(str, '%');
		write(fd, str, to_write);
		str += to_write;
		total += to_write;
	}
	va_end(args);
	return (total);
}
