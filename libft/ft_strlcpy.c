/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpinheir <fpinheir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/16 19:06:53 by fpinheir          #+#    #+#             */
/*   Updated: 2026/05/17 00:47:31 by fpinheir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	char		*d;
	const char	*s;

	d = dst;
	s = src;
	if (size == 0)
		return (ft_strlen(src));
	while ((size - 1 > 0) && (*s))
	{
		*d++ = *s++;
		size--;
	}
	*d = '\0';
	return (ft_strlen(src));
}
/*
#include <unistd.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
	char src[] = "coucou";
	char dest[10]; memset(dest, 'A', 10);
	printf("%zu\n", ft_strlcpy(dest, src, 2));
	write(1, dest, 10);
}*/
