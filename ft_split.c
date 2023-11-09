/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajuliao- <ajuliao-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 23:47:41 by ajuliao-          #+#    #+#             */
/*   Updated: 2023/11/09 00:07:17 by ajuliao-         ###   ########.fr       */
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
	char	*tmp;

	breaks = count_words(s, c) + 1;
	result = malloc (sizeof(char *) * breaks);
	if (!result)
		return (NULL);

	i = 0;
	tmp = (char *)s;
	while (*tmp)
	{
		while (*s == c)
			++s;
		tmp = (char *)s;
		while (*tmp != c && *tmp)
			++tmp;
		if (*tmp == c || tmp > s)
		{
			*result = ft_substr(s, 0, tmp - s);
			s = tmp;
			++result;
		}
	}
	*result = NULL;
	printf("result%s\n", result[0]);
	printf("result%s\n", result[1]);
	printf("result%s\n", result[2]);
	return (result);
}
