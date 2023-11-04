/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajuliao- <ajuliao-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 14:22:19 by ajuliao-          #+#    #+#             */
/*   Updated: 2023/11/04 16:01:03 by ajuliao-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*result;
	int				i;

	if (len > ft_strlen(s))
		result = (char *) malloc(sizeof(char) * ft_strlen(s) + 1);
	else
		result = (char *) malloc(sizeof(char) * len + 1);
	if (result == 0)
		return (0);
	i = 0;
	while ((start + i) < ft_strlen(s) && i < len)
	{
		result[i] = s[start + i];
		i++;
	}
	result[i] = '\0';
	return (result);
}
