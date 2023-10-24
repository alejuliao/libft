/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajuliao- <ajuliao-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 20:04:28 by ajuliao-          #+#    #+#             */
/*   Updated: 2023/10/21 17:57:52 by ajuliao-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*result;
	unsigned char	chhar;

	i = 0;
	chhar = (unsigned char)c;
	result = (unsigned char *)s;
	while (i < n)
	{
		if (result[i] == chhar)
			return (&result[i]);
		i++;
	}
	return (0);
}
