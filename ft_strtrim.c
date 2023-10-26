/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajuliao- <ajuliao-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 20:37:34 by ajuliao-          #+#    #+#             */
/*   Updated: 2023/10/25 19:12:13 by ajuliao-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*result;
	int		len_set;
	int		start;
	int		end;

	len_set = ft_strlen(set);

	start = 0;
	end = 0;
	if (ft_strncmp(s1, set, len_set) == 0)
		start = ft_strlen(set);
	if (ft_strncmp(s1 + (ft_strlen(s1) - len_set), set, len_set) == 0)
		end = len_set;
	result = malloc(sizeof(char) * (ft_strlen(s1) - (start + end)));
	if (result == 0 || set == 0 || s1 == 0)
		return (0);
	result = ft_substr(s1, start, ft_strlen(s1) - (end + start));
	return (result);
}
