/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpinheir <fpinheir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/18 17:18:19 by fpinheir          #+#    #+#             */
/*   Updated: 2026/05/18 17:35:53 by fpinheir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*new;
	unsigned int	i;

	i = 0;
	new = ft_calloc(ft_strlen(s) + 1, sizeof (char));
	while (s[i])
	{
		new[i] = (*f)(i, s[i]);
		i++;
	}
	return (new);
}
/*
#include <stdio.h>

char addOne(unsigned int i, char c) 
{
	return (i + c);
}

int	main(int argc, char **argv)
{
	char	*str;

	if (argc == 2)
	{
		str = ft_strmapi(argv[1], &addOne);
		printf("%s\n", str);
		free(str);
	}
	return (0);
}*/
