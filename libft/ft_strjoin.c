/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpinheir <fpinheir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/17 02:43:34 by fpinheir          #+#    #+#             */
/*   Updated: 2026/05/17 02:49:35 by fpinheir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	size;
	char	*joined;

	size = ft_strlen(s1) + ft_strlen(s2) + 1;
	joined = ft_calloc(size, sizeof (char));
	if (joined != NULL)
	{
		ft_strlcpy(joined, s1, size);
		ft_strlcat(joined, s2, size);
	}
	return (joined);
}
