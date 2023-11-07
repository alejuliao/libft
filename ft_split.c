/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajuliao- <ajuliao-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 19:34:50 by ajuliao-          #+#    #+#             */
/*   Updated: 2023/11/06 22:24:29 by ajuliao-         ###   ########.fr       */
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
	ends[3] = ft_strlen(s);
	return (ends);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	char	**result;
	int		breaks;
	int		*starts;
	int		*ends;
	// int		j;

	breaks = count_breaks(s, c) + 1;
	// ends = (int *) malloc (sizeof(int) * breaks);
	result = malloc (sizeof(char *) * breaks);
	// i = 0;
	// j = 0;
	// while (s[i] != '\0')
	// {
	// 	if (s[i] == c)
	// 	{
	// 		ends[j] = i;
	// 		while (s[i + 1] == c)
	// 			i++;
	// 		j++;
	// 	}
	// 	i++;
	// }
	ends = count_ends(s, c, breaks);
	// while (*ends)
		printf("ends%d\n", ends[5]);
	// ends[breaks] = ft_strlen(s);
	// printf("ends%d\n", ends[breaks]);
	i = 0;
	while (i <= breaks)
	{
		result[i] = malloc (sizeof(char *) * starts[i] + 1);
		result[i] = ft_substr(s, starts[i], starts[i + 1] - (starts[i]) - 1);
		i++;
	}
	return (result);
}
