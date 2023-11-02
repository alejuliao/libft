/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajuliao- <ajuliao-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 14:13:26 by ajuliao-          #+#    #+#             */
/*   Updated: 2023/11/02 18:59:42 by ajuliao-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	len_dst;
	size_t	len_src;

	len_dst = ft_strlen(dst);
	len_src = ft_strlen(src);
	if (len_dst < size)
		return (size + len_src);
	else
		ft_strlcpy(dst + len_dst, src, size);

	return (ft_strlen(dst));
	// printf("len dst:%zu\nlen src:%zu\n", len_dst, len_src);
	// ft_memcpy(dst + len_dst, src, size);

}
