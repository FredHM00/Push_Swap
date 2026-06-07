/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpinheir <fpinheir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/18 15:30:39 by fpinheir          #+#    #+#             */
/*   Updated: 2026/05/18 17:00:13 by fpinheir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_word_count(char const *s, char c)
{
	size_t	count;
	int		in_word;

	count = 0;
	in_word = 0;
	while (*s)
	{
		if (in_word && (*s == c))
			in_word = 0;
		if (!in_word && (*s != c))
		{
			count++;
			in_word = 1;
		}
		s++;
	}
	return (count);
}

static size_t	ft_word_len(char const *s, char c)
{
	size_t	len;

	len = 0;
	while (s[len] && (s[len] != c))
		len++;
	return (len);
}

char	**ft_split(char const *s, char c)
{
	size_t	words;
	size_t	i;
	size_t	curr_len;
	char	**split;

	words = ft_word_count(s, c);
	split = ft_calloc(words + 1, sizeof (char *));
	i = 0;
	while (i < words)
	{
		while (*s && (*s == c))
			s++;
		curr_len = ft_word_len(s, c);
		split[i] = ft_calloc(curr_len + 1, sizeof (char));
		ft_strlcpy(split[i], s, (curr_len + 1) * sizeof (char));
		s += curr_len;
		i++;
	}
	split[i] = NULL;
	return (split);
}
/* tests
#include <stdio.h>
int main(int argc, char **argv)
{
	char	**split;
	int		i;

	if (argc == 3)
	{
		split = ft_split(argv[1], argv[2][0]);
		i = 0;
		while (split[i] != NULL)
		{
			printf("%s\n", split[i]);
			free(split[i]);
			i++;
		}
		free(split);
	}
	return (0);
}*/
