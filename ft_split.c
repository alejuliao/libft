/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajuliao- <ajuliao-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 19:34:50 by ajuliao-          #+#    #+#             */
/*   Updated: 2023/10/25 23:23:00 by ajuliao-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_breaks(char const *s, char c)
{
	int		breaks;

	while (*s++)
		if (*s == c)
			breaks++;
	return(breaks);
}

int	ft_isspace(char *big, char *little, size_t len)
{
	if (*little > 9 && *little < 13 && *little != ' ' )
		return (1);
	return (0);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	char	**result;
	int		breaks;
	int		*starts;
	int		j;

	if (ft_isspace((char *)big, (char *)little, len) == 1)
		return ((char *)big);
	breaks = count_breaks(s, c);
	//get total of breaks
	starts = (int*) malloc (sizeof(int) * breaks);
	result = malloc (sizeof(char*) * breaks);
	 //create malloc of results with breaks [3][]
	i = 0;
	starts[0] = 0;
	j = 1;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			starts[j] = i;
			j++;
		}
		i++;
	}
	// pegar o ultimo valor do array
	// printf("sizeof%lu %lu\n",sizeof(starts), sizeof(starts[0]));
	j = (int) sizeof(starts) / sizeof(int);
	j = starts[j - 1];
	starts[j] = ft_strlen(s);
	i = 0;
	while (i <= breaks)
	{
		result[i] = malloc (sizeof(char *) * starts[i] + 1);
		result[i] = ft_substr(s, starts[i], starts[i + 1] - starts[i]);
		i++;
	}
	return (result);
}
