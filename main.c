/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajuliao- <ajuliao-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 12:00:10 by ajuliao-          #+#    #+#             */
/*   Updated: 2023/10/28 11:42:01 by ajuliao-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

int	main(void)
{
    //     char *big = "alexandre";
    //     char *lit = "";
	// printf("%s", ft_substr(big, 0, 8));
	// 	// char *d1 = memchr(src, '\200', 10);
    //     // char *d2 = ft_memchr(src, '\200', 10);
	// size_t max = strlen(lit);
	// // printf("original: %s\n", strnstr(big, lit, 4));
	// printf("falsa: %s\n", ft_strnstr(big, lit, 0));

	// printf("%p", memcpy(NULL, NULL, 3));

	// const char	s1[23]= "ale juliao santos silva";
	// char	**result;
	// // printf("%s", ft_strjoin(s1, s2));
	// printf("%s", **ft_split(s1, ' '));
	// **ft_split(s1, ' ');

	// ft_itoa(12344);
	char s1[] = " lorem ipsum dolor sit amet   ";
	printf("result:%s", ft_strtrim(s1, "l "));
	return (0);
}
