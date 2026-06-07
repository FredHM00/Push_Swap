/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpinheir <fpinheir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/17 02:11:03 by fpinheir          #+#    #+#             */
/*   Updated: 2026/05/18 14:44:14 by fpinheir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*sub;
	const size_t	str_len = ft_strlen(s);
	size_t			size;

	if ((start > str_len) || (s == NULL))
		return (ft_calloc(1, 1));
	else if (str_len < len + start)
		size = str_len - start + 1;
	else
		size = len + 1;
	sub = ft_calloc(size, sizeof (char));
	if (sub != NULL)
		ft_strlcpy(sub, s + start, size);
	return (sub);
}
/*
#include <stdio.h>

int	main(int argc, char **argv)
{
	char	*substr;

	if (argc == 4)
	{
		substr = ft_substr(argv[1], ft_atoi(argv[2]), ft_atoi(argv[3]));
		printf("%s\n", substr);
		free(substr);
	}
}*/
