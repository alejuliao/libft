/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajuliao- <ajuliao-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 12:00:10 by ajuliao-          #+#    #+#             */
/*   Updated: 2023/11/07 21:17:03 by ajuliao-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
	// printf("itoa:%s\n", ft_itoa(-2147483648));
	// printf("itoa:%s\n", ft_itoa(0));

	// char s1[] = "";
	// printf("result:%s", ft_strtrim(s1, ""));
	// printf("%s", ft_strjoin(s1, s2));
	// const char	s1[23]= "ale juliao santos silva";
	// char	**result;
	// printf("%s", *ft_split("lorem                      ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse", ' '));
	// printf("%s", *ft_split("    Alexandre       Juliao Santos    silva     ", ' '));
	// printf("%s", *ft_split("Alexandre       Juliao Santos    silva     ", ' '));
	// printf("%s", *ft_split("lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse lectus tortor, dignissim sit amet, adipiscing nec, ultricies sed, dolor. Cras elementum ultricies diam. Maecenas ligula massa, varius a, semper congue, euismod non, mi.", 'i'));
	// *ft_split("   lorem   ipsum dolor     sit amet, consectetur   adipiscing elit. Sed non risus. Suspendisse   ", ' ');
	// **ft_split(s1, ' ');
	// ft_putstr_fd("  lorem\nipsum\rdolor\tsit amet  ", 1);

	char	*str;
	char	*s;
	str = strdup("0123456789");
	s = ft_substr(str, 9, 10);
	printf("%s", s);
	return (0);
	// 	printf("%d\n", starts[0]);
	// printf("%d\n", starts[1]);
	// printf("%d\n", starts[2]);
	// printf("%d\n", starts[3]);
}

