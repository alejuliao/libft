/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajuliao- <ajuliao-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 20:37:34 by ajuliao-          #+#    #+#             */
/*   Updated: 2023/10/28 14:00:15 by ajuliao-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	
char	*ft_strtrim(char const *s1, char const *set)
{
	char	*result;
	int		len_set;
	int		i;
	int		end;
	int		c;

	if (!s1)
		return (NULL);
	if (!set)
		return ((char *) ft_strdup((char *)s1));
	i = 0;
	c = 0;
	while (s1[i] == (char *)ft_strchr(&s1[i], set[c]))
	{
		c++;
		i++;
	}





	// end = ft_strlen(s1);
	// while (end > 0 && (s1[end] == ' ' || (s1[end] >= 9 && s1[end] <= 13)))
	// 	end--;

	// while (ft_strchr(s1, set[i]) && s1[i] != '\0')
	// 	i++;
	// printf("i:%d\n", i);
	// printf("i:%d\n", end);


	return (result);
}

// char	*ft_strtrim(char const *s1, char const *set)
// {
// 	char	*result;
// 	int		len_set;
// 	int		start;
// 	int		end;

// 	len_set = ft_strlen(set);

// 	start = 0;
// 	end = 0;
// 	if (!set || !s1)
// 		return (0);
// 	if (ft_strncmp(s1, set, len_set) == 0)
// 		start = ft_strlen(set);
// 	if (ft_strncmp(s1 + (ft_strlen(s1) - len_set), set, len_set) == 0)
// 		end = len_set;
// 	result = malloc(sizeof(char) * (ft_strlen(s1) - (start + end)));
// 	if (result == 0)
// 		return (0);
// 	result = ft_substr(s1, start, ft_strlen(s1) - (end + start));
// 	return (result);
// }
