/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajuliao- <ajuliao-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 19:34:09 by ajuliao-          #+#    #+#             */
/*   Updated: 2023/10/26 20:59:44 by ajuliao-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_count(int n)
{
	int	i;
	int	num;

	i = 1;
	num = n;
	while ((num /= 10))
	{
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*result;
	int		num;
	int		count;
	int		i;
	int		rem;

	num = n;
	count = ft_count(n);
	result = (char *) malloc(sizeof(char) * (count + 1));
	i = 0;
	while (i < count)
	{
		rem = n % 10;
		n = n / 10;
		result[count - (i + 1)] = rem + '0';
		i++;
	}
	printf("%s", result);
	return (result);
}
