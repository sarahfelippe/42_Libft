/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_part2_iteri.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfelippe <sfelippe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 20:38:57 by sfelippe          #+#    #+#             */
/*   Updated: 2022/09/25 22:45:38 by sfelippe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*f(unsigned int j, char *c)
{
		c[j] = c[j] + 2;	
}

int	main(void)
{
	char string_1[] = "Chocolate com pimenta";
	
	//ft_striteri
	printf("ft_striteri\n");
	printf("%s\n", string_1);
	ft_striteri(string_1, f);
	printf("%s\n", string_1);
}
