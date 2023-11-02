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

char	*ft_exception(int n, char *result)
{
	if (n == -2147483648 )
	{
		result = (char *) malloc(sizeof(char) * 20);
		result = "-2147483648";
		return (result);
	}
		if (n == 2147483647 )
	{
		result = (char *) malloc(sizeof(char) * 19);
		result = "2147483647";
		return (result);
	}
	if (n == 0)
	{
		result = (char *) malloc(19);
		result[0] = '0';
		return (result);
	}
	return ('\0');
}
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

	if (ft_exception(n, result)[0] == '\0')
		return (result);
	num = n;
	count = ft_count(n);
	result = (char *) malloc(sizeof(char) * (count + 1));
	if (result == 0)
		return (0);
	i = 0;
	if (n < 0)
	{
		result[0] = '-';
		num = num * -1;
		i++;
	}
	while (i < count)
	{
		rem = num % 10;
		num = num / 10;
		if (n > 0)
			result[count - (i + 1)] = rem + '0';
		else
			result[count - i] = rem + '0';
		i++;
	}
	result[i] = '\0';
	return (result);
}
