/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajuliao- <ajuliao-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 20:54:37 by ajuliao-          #+#    #+#             */
/*   Updated: 2023/11/02 11:55:25 by ajuliao-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isspace(char *big, char *little, size_t len)
{
	if ((*little > 9 && *little < 13 && *little != ' ') || !little || len == 0)
		return (1);
	return (0);
}

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	int		f;

	if (ft_isspace((char *)big, (char *)little, len))
		return ((char *)big);
	i = 0;
	f = 0;
	while (big[i] && i < len)
	{
		f = 0;
		while (big[i + f] == little[f] && big[i + f] && little[f] != '\0'
			&& (i + f) < len)
		{
			f++;
		}

		if (little[f] == '\0')
			return (&((char *)big)[i]);
		i++;
	}
	return (0);
}
