/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpinheir <fpinheir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/16 17:12:48 by fpinheir          #+#    #+#             */
/*   Updated: 2026/05/16 22:57:23 by fpinheir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	if (n-- == 0)
		return (0);
	while ((*s1 == *s2) && *s1)
	{
		if (n--)
		{
			s1++;
			s2++;
		}
		else
			break ;
	}
	return ((unsigned char) *s1 - (unsigned char) *s2);
}
