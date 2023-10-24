/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajuliao- <ajuliao-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 14:22:19 by ajuliao-          #+#    #+#             */
/*   Updated: 2023/10/24 19:45:49 by ajuliao-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*result;

	result = (char *) malloc(sizeof(char) * len + 1);
	if (result == 0)
		return (0);
	result = ft_memcpy(result, s + start, len);
	return (result);
}
