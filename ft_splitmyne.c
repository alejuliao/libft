/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_splitmyne.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajuliao- <ajuliao-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 19:34:50 by ajuliao-          #+#    #+#             */
/*   Updated: 2023/11/08 23:53:00 by ajuliao-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_breaks(char const *s, char c)
{
	int	breaks;
	int	i;

	breaks = 0;
	i = 0;
	if (c == '\0')
		return (1);
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		if (s[i] != c && s[i])
			breaks++;
		while (s[i] != c && s[i] != '\0')
			i++;
	}
	return (breaks);
}

static int	*count_ends(char const *s, char c, int breaks)
{
	int		*ends;
	int		j;
	int		i;

	ends = (int *) malloc (sizeof(int) * breaks);
	i = 0;
	while (s[i] == c)
		i++;
	j = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			ends[j] = i;
			while (s[i + 1] == c)
				i++;
			j++;
		}
		i++;
	}
	ends[breaks - 1] = ft_strlen(s);
	return (ends);
}

static int	*count_starts(char const *s, char c, int breaks)
{
	int		*starts;
	int		j;
	int		i;

	starts = (int *) malloc (sizeof(int) * breaks);
	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		if (s[i] != c && s[i])
			starts[j++] = i;
		while (s[i] != c && s[i] != '\0')
			i++;
	}
	return (starts);
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
