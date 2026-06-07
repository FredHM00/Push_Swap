/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpinheir <fpinheir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/16 19:56:29 by fpinheir          #+#    #+#             */
/*   Updated: 2026/05/16 23:06:42 by fpinheir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*one;
	const unsigned char	*two;

	one = s1;
	two = s2;
	if (n-- == 0)
		return (0);
	while (*one == *two)
	{
		if (n--)
		{
			one++;
			two++;
		}
		else
			break ;
	}
	return (*one - *two);
}
