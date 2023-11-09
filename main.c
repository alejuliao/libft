/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajuliao- <ajuliao-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 12:00:10 by ajuliao-          #+#    #+#             */
/*   Updated: 2023/11/08 22:05:41 by ajuliao-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	char	**test;
	// char	**result;
	// printf("%s", *ft_split("lorem                      ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse", ' '));
	// printf("%s", *ft_split("    Alexandre       Juliao Santos    silva     ", ' '));
	// printf("%s", *ft_split("Alexandre       Juliao Santos    silva     ", ' '));
	// printf("%s", *ft_split("lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse lectus tortor, dignissim sit amet, adipiscing nec, ultricies sed, dolor. Cras elementum ultricies diam. Maecenas ligula massa, varius a, semper congue, euismod non, mi.", 'i'));
	*test = *ft_split("  tripouille  42  ", ' ');

	return (0);
}

