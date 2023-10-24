/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajuliao- <ajuliao-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 19:30:35 by ajuliao-          #+#    #+#             */
/*   Updated: 2023/10/24 20:27:00 by ajuliao-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new;
	int		i;
	int		j;
	int		len;

	len = ft_strlen(s1) + ft_strlen(s2);
	i = 0;
	j = 0;
	new = malloc(sizeof(char) * len + 1);
	// new = ft_memcpy(new, s1, ft_strlen(s1));
	// new = ft_memcpy(new  + ft_strlen(s1), s2, ft_strlen(s2));
	while (s1[i] != '\0')
	{
		new[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		new[i] = s2[j];
		j++;
		i++;
	}
	new[i] = '\0';
	return (new);
}
