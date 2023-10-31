/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajuliao- <ajuliao-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 20:37:34 by ajuliao-          #+#    #+#             */
/*   Updated: 2023/10/30 22:54:36 by ajuliao-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_c(char c, const char *set)
{
	int	i;

	i = 0;
	if (!*set)
		return (0);
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char			*res;
	int				len_s1;
	unsigned int	start;
	int				end;

	len_s1 = ft_strlen(s1);
	start = 0;
	end = 0;
	if (!*s1)
		return ("");
	if (!*set)
		return (ft_substr(s1, 0, len_s1));
	while (count_c(*s1, set) == 1)
	{
		start++;
		s1++;
	}
	while (count_c(s1[(len_s1 - start) - 1], set) == 1)
	{
		len_s1--;
		end++;
	}
	// res = (char *) malloc(sizeof(char) * (ft_strlen(s1) - (start + end) + 1));
	res = ft_substr(s1, 0, ft_strlen(s1) - (end));
	if (!res)
		return (0);
	return (res);
}
