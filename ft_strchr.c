/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajuliao- <ajuliao-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 20:27:34 by ajuliao-          #+#    #+#             */
/*   Updated: 2023/11/07 23:22:49 by ajuliao-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*result;
	int		i;

	i = 0;
	if (c > 255)
		c %= 256;
	result = (char *) malloc(sizeof(char) * ft_strlen(s) + 1);
	if (!result)
		return (0);
	result = (char *)s;
	if (c == '\0')
		return ((char *)&result[ft_strlen(s)]);
	while (result[i])
	{
		if (result[i] == c)
			return (&result[i]);
		i++;
	}
	return (0);
}
