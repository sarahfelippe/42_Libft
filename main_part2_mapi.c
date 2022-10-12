/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_part2_mapi.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfelippe <sfelippe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 20:38:57 by sfelippe          #+#    #+#             */
/*   Updated: 2022/09/25 22:42:34 by sfelippe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*f(unsigned int j, char c)
{
		j = 0;
		return (c + 2);	
}

int	main(void)
{
	char const	string_1[] = "Chocolate com pimenta";
	char		*new_string;
	
	//ft_strmapi
	printf("%s\n", string_1);
	new_string = ft_strmapi(string_1, f);
	printf("%s\n", new_string);
}