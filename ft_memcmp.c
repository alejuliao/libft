/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajuliao- <ajuliao-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 21:44:45 by ajuliao-          #+#    #+#             */
/*   Updated: 2023/10/18 20:35:14 by ajuliao-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const char	*cs1;
	const char	*cs2;
	int			result;

	cs1 = (const char *)s1;
	cs2 = (const char *)s2;
	result = ft_strncmp(cs1, cs2, n);
	return (result);
}
