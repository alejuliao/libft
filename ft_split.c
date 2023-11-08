/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajuliao- <ajuliao-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 19:34:50 by ajuliao-          #+#    #+#             */
/*   Updated: 2023/11/07 20:27:19 by ajuliao-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_breaks(char const *s, char c)
{
	int	breaks;
	int	i;

	breaks = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] == c && s[i + 1] != c)
			breaks++;
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
	breaks = breaks - 1;
	ends[breaks] = ft_strlen(s);
	return (ends);
}

static int	*count_starts(char const *s, char c, int breaks)
{
	int		*starts;
	int		j;
	int		i;

	starts = (int *) malloc (sizeof(int) * breaks);
	starts[0] = 0;
	i = 0;
	j = 1;
	while (s[i] != '\0')
	{
		if (s[i - 1] == c && s[i] != c)
		{
			starts[j] = i;
			j++;
		}
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
	starts = count_starts(s, c, breaks);
	ends = count_ends(s, c, breaks);
	i = 0;
	while (i < breaks)
	{
		result[i] = malloc (sizeof(char *) * (starts[i] - ends[i]));
		result[i] = ft_substr(s, starts[i], ends[i] - starts[i]);
		i++;
	}
	return (result);
}
