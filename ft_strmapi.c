/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajuliao- <ajuliao-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 11:27:01 by ajuliao-          #+#    #+#             */
/*   Updated: 2023/11/02 19:27:51 by ajuliao-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*result;
	int		i;
	int		len_s;

	len_s = ft_strlen(s);
	result = (char *) malloc(sizeof(char) * len_s + 1);
	if (!result)
		return (0);
	i = 0;
	while (s[i] != '\0')
	{
		f(i, result[i]);
		i++;
	}
	result[i] = '\0';
	return (result);
}
