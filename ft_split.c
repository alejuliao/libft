/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajuliao- <ajuliao-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 19:34:50 by ajuliao-          #+#    #+#             */
/*   Updated: 2023/11/06 19:55:47 by ajuliao-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_breaks(char const *s, char c)
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

char	**ft_split(char const *s, char c)
{
	int		i;
	char	**result;
	int		breaks;
	int		*starts;
	int		*ends;
	int		j;
	int		iends;

	breaks = count_breaks(s, c);
	//get total of breaks
	starts = (int *) malloc (sizeof(int) * breaks);
	ends = (int *) malloc (sizeof(int) * breaks);
	result = malloc (sizeof(char *) * breaks);
	 //create malloc of results with breaks [3][]
	i = 0;
	starts[0] = 0;
	j = 1;
	iends = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			starts[j] = i;
			while (s[i + 1] == c)
				i++;
			j++;
		}
		i++;
	}
	while (*starts != starts[breaks])
	{
		printf("starts%d\n", *starts++);
		printf("ends%d\n", *ends++);

	}
	starts[j] = ft_strlen(s) + 1;
	i = 0;
	while (i <= breaks)
	{
		result[i] = malloc (sizeof(char *) * starts[i] + 1);
		result[i] = ft_substr(s, starts[i], starts[i + 1] - (starts[i]) - 1);
		i++;
	}
	return (result);
}
