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

static int	count_words(const char *s, char c)
{
	int count;
	int check;

	count = 0;
	check = 0;
	while (*s)
	{
		if (*s != c && check == 0)
		{
			check = 1;
			count++;
		}
		else if (*s == c)
			check = 0;
		s++;
	}
	return (count);
}

static char	*add_words(const char *s, int start, int end)
{
	char	*words;
	int		i;

	i = 0;
	words = malloc((end - start + 1) * sizeof(char));
	if (!words)
	{
		return (NULL);
	}
	while (start < end)
		words[i++] = s[start++];
	words[i] = '\0';
	return (words);
}

char		**ft_split(char const *s, char c)
{
	int	i;
	int	j;
	int		index;
	char	**result;

	if (!s)
		return (0);
	if(!(result = malloc((count_words(s, c) + 1) * sizeof(char *))))
		return (0);
	i = 0;
	j = 0;
	index = -1;
	while (i <= ft_strlen(s))
	{
		if (s[i] != c && index < 0)
			index = i;
		else if ((s[i] == c || i == ft_strlen(s)) && index >= 0)
		{
			result[j++] = add_word(s, index, i);
			index = -1;
		}
		i++;
	}
	result[j] = 0;
	return (result);
}
