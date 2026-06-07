/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpinheir <fpinheir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/16 19:07:02 by fpinheir          #+#    #+#             */
/*   Updated: 2026/05/27 14:33:41 by fpinheir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t			start;

	if (size == 0)
		return (ft_strlen(src));
	start = ft_strlen(dst);
	if (size <= start)
		return (size + ft_strlen(src));
	size--;
	while (*src && (start < size))
	{
		dst[start] = *src;
		src++;
		start++;
	}
	dst[start] = '\0';
	return (start + ft_strlen(src));
}
