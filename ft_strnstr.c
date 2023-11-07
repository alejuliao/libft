/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajuliao- <ajuliao-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 20:54:37 by ajuliao-          #+#    #+#             */
/*   Updated: 2023/11/06 19:51:26 by ajuliao-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	f;
	char	*new;

	new = (char *)big;
	i = 0;
	f = 0;
	if (!little && len == 0)
		return (new);
	if (big == little)
		return (new);
	if (len == 0)
		return (0);
	while (big[i] && i < len)
	{
		f = 0;
		while (big[i + f] == little[f] && big[i + f] && little[f] != '\0'
			&& (i + f) < len)
			f++;
		if (f == (size_t)ft_strlen(little))
			return (new + i);
		i++;
	}
	return (0);
}
