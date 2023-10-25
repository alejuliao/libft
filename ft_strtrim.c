/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajuliao- <ajuliao-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 20:37:34 by ajuliao-          #+#    #+#             */
/*   Updated: 2023/10/24 21:02:42 by ajuliao-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*result;

	result = malloc(sizeof(char) * ft_strlen(s1) - (ft_strlen(set) * 2));
	// while (s1)
	// {

	// }
	printf("teste:%s\n",s1);
	if (ft_strncmp(s1, set, ft_strlen(set)) == 1)
	{
		result = ft_strdup((char *)s1 + ft_strlen(set));
	}
	// result = ft_strncmp(s1, set, ft_strlen(set));
	return (result);
}
