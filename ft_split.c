/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajuliao- <ajuliao-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 23:47:41 by ajuliao-          #+#    #+#             */
/*   Updated: 2023/11/08 23:53:13 by ajuliao-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(char const *s, char c)
{
	int	words;
	int	i;

	words = 0;
	i = 0;
	if (c == '\0')
		return (1);
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		if (s[i] != c && s[i])
			words++;
		while (s[i] != c && s[i] != '\0')
			i++;
	}
	return (words);
}

char	**ft_split(char const *s, char c)
{
int		i;
	char	**result;
	int		breaks;
	int		*starts;
	int		*ends;

	breaks = count_breaks(s, c) + 1;
	result = malloc (sizeof(char *) * breaks);
	if (!result)
		return (NULL);
	if (!c)
	{
		result[0] = ft_strdup((char *)s);
		return (result);
	}
	if (!*s)
	{
		result[0] = 0;
		return (result);
	}
	starts = count_starts(s, c, breaks);
	ends = count_ends(s, c, breaks);
	i = 0;
	while (i < breaks - 1)
	{
		result[i] = ft_substr(s, starts[i], ends[i] - starts[i]);
		if (result[i] == 0)
			return (0);
		i++;
	}
	result[breaks] = 0;
	// printf("result%s\n", result[0]);
	// printf("result%s\n", result[1]);
	// printf("result%s\n", result[2]);
	return (result);
}
