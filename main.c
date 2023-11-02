/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajuliao- <ajuliao-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 12:00:10 by ajuliao-          #+#    #+#             */
/*   Updated: 2023/11/02 18:53:26 by ajuliao-         ###   ########.fr       */
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
	// printf("itoa:%s\n", ft_itoa(214748364));
	// char s1[] = "";
	// printf("result:%s", ft_strtrim(s1, ""));
	// printf("%s", ft_strjoin(s1, s2));
	// const char	s1[23]= "ale juliao santos silva";
	// char	**result;
	// printf("%s", *ft_split("lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse", ' '));
	// **ft_split(s1, ' ');
	// ft_putstr_fd("  lorem\nipsum\rdolor\tsit amet  ", 1);

	// char dest[14] = "Hello, ";
    // char src[] = "world!";
	char dest[14] = "a";
    size_t dest_size = sizeof(dest);

    // size_t result = ft_strlcat(dest, src, 4);
	size_t result =  ft_strlcat(dest, "lorem ipsum dolor sit amet", 15);
    printf("Concatenated string:%s\n", dest);
    printf("Total length: %zu\n", result);

	return (0);
}
