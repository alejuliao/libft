/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajuliao- <ajuliao-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 19:34:09 by ajuliao-          #+#    #+#             */
/*   Updated: 2023/11/06 21:40:37 by ajuliao-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count(int n)
{
	int	count;

	count = 0;
	if (n < 1)
		count++;
	while (n != 0)
	{
		n = n / 10;
		count++;
	}

	return (count);
}

char	*ft_itoa(int n)
{
	char		*result;
	long int	num;
	int			count;
	int			i;

	num = n;
	if (n < 0)
		num *= -1;
	count = ft_count(num);
	if (n < 0)
		count++;
	result = (char *) malloc(sizeof(char) * count + 1);
	if (result == 0)
		return (0);
	i = -1;
	while (i++ < count)
	{
		result[count - i - 2] = num % 10 + '0';
		num = num / 10;
	}
	if (n < 0)
		result[0] = '-';
	if (n == 0)
		result[0] = '0';
	result[i] = '\0';
	return (result);
}
