/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpinheir <fpinheir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/18 14:47:40 by fpinheir          #+#    #+#             */
/*   Updated: 2026/05/18 17:52:26 by fpinheir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_find(char c, char const *set)
{
	while (*set)
	{
		if (*set == c)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char		*trimmed;
	char const	*ptr;
	size_t		size;

	while (*s1 && ft_find(*s1, set))
		s1++;
	ptr = s1;
	size = 0;
	while (*ptr)
	{
		if (!ft_find(*ptr, set))
			size = ptr - s1;
		ptr++;
	}
	trimmed = ft_substr(s1, 0, size + 1);
	return (trimmed);
}
/*
#include <stdio.h>
int	main(int argc, char **argv)
{
	char	*trim;

	if (argc == 3)
	{
		trim = ft_strtrim(argv[1], argv[2]);
		printf("%s\n", trim);
		free(trim);
	}
}*/
