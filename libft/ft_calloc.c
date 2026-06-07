/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpinheir <fpinheir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/16 20:05:53 by fpinheir          #+#    #+#             */
/*   Updated: 2026/05/27 11:43:24 by fpinheir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*arr;

	if ((!nmemb) || (!size))
		return (malloc(0));
	if (nmemb > (INT_MAX / size))
		return (NULL);
	arr = malloc(nmemb * size);
	if (arr != NULL)
		ft_bzero(arr, (nmemb * size));
	return (arr);
}
