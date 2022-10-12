/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_part2_subjoin.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfelippe <sfelippe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 20:38:57 by sfelippe          #+#    #+#             */
/*   Updated: 2022/09/25 22:22:52 by sfelippe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(void)
{
	char const	string_1[] = "Chocolate com pimenta";
	char		string_2[] = "Hello, all!";
	char		string_3[] = "How Is Everyone?";
	
	//ft_substr
	printf("ft_substr\n");
	printf("original string: %s\n", string_1);
	printf("substring starting at 5th position and length of 4 chars: %s\n\n", ft_substr(string_1, 5, 4));

	//ft_strjoin
	printf("ft_strjoin\n");
	printf("s1: %s and s2: %s\n", string_2, string_3);
	printf("new string after function: %s\n\n", ft_strjoin(string_2, string_3));
}
