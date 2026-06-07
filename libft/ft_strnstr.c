/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpinheir <fpinheir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/16 17:13:30 by fpinheir          #+#    #+#             */
/*   Updated: 2026/05/27 12:18:10 by fpinheir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	const size_t	lil_len = ft_strlen(little);
	const size_t	big_len = ft_strlen(big);

	if (lil_len == 0)
		return ((char *)big);
	if (lil_len > big_len)
		return (NULL);
	while ((len-- >= lil_len) && *(big + lil_len - 1))
	{
		if (ft_strncmp(big, little, lil_len) == 0)
			return ((char *)big);
		big++;
	}
	return (NULL);
}
