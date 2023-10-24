/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajuliao- <ajuliao-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 12:00:10 by ajuliao-          #+#    #+#             */
/*   Updated: 2023/10/24 20:10:54 by ajuliao-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

int	main(void)
{
    //     char *big = "oh no not the empty string !";
    //     char *lit = "";

	// 	// char *d1 = memchr(src, '\200', 10);
    //     // char *d2 = ft_memchr(src, '\200', 10);
	// size_t max = strlen(lit);
	// // printf("original: %s\n", strnstr(big, lit, 4));
	// printf("falsa: %s\n", ft_strnstr(big, lit, 0));

	// printf("%p", memcpy(NULL, NULL, 3));

	const char	s1[9]="alexandre";
	const char	s2[6]="juliao";

	// printf("%s", ft_strjoin(s1, s2));
	printf("%s", ft_strjoin("alexandre", "juliao"));

	return (0);
}
