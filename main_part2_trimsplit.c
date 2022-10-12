/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_part2_trimsplit.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfelippe <sfelippe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 20:38:57 by sfelippe          #+#    #+#             */
/*   Updated: 2022/09/25 22:32:55 by sfelippe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(void)
{
	char	s1[] = "lorem amet";
	char	s2[] = "***Olá***";

	char	string[] = "Oi todo mundo";
	char	**result;
	int		i;
	
	//ft_strtrim
	printf("ft_strtrim\n");
	printf("%s\n", ft_strtrim(s1, "te")); //lorem am
	printf("%s\n", ft_strtrim(s1, "l ")); //orem amet
	printf("%s\n", ft_strtrim(s1, "tel")); //orem am
	printf("%s\n\n", ft_strtrim(s2, "***")); //Olá

	//ft_split
	printf("ft_split\n");
	result = ft_split(string, ' ');
	i = 0;
	while (result[i] != 0) 
	{
		printf("string[%d] = '%s'\n", i, result[i]);
		i++;
	}
}
