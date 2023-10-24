/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajuliao- <ajuliao-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 20:27:34 by ajuliao-          #+#    #+#             */
/*   Updated: 2023/10/21 11:38:13 by ajuliao-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*result;
	int		i;

	if (c == '\0')
		return ((char *)s + ft_strlen(s));
	i = 0;
	result = (char *)s;
	while (result[i])
	{
		if (result[i] == c)
			return (&result[i]);
		i++;
	}
	return (0);
}
