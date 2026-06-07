/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpinheir <fpinheir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/16 20:23:23 by fpinheir          #+#    #+#             */
/*   Updated: 2026/05/16 20:38:17 by fpinheir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*new_str;
	size_t	size;

	size = ft_strlen(s) + 1;
	new_str = ft_calloc(size, sizeof (char));
	if (new_str == NULL)
		return (new_str);
	ft_strlcpy(new_str, s, size);
	return (new_str);
}
