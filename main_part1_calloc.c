/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_calloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfelippe <sfelippe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 00:38:10 by sfelippe          #+#    #+#             */
/*   Updated: 2022/09/11 02:01:26 by sfelippe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main (void)
{
	char	*string;
	int		*name;
	int 	i;
	
	string = (char *) ft_calloc(20, sizeof(char));
	printf("A string é: %s\n", string);
	name = (int *) ft_calloc(9, sizeof(int));
	i = 0;
	while (i < 9)
	{
		printf("%d\n", name[i]);
		i++;
	}
	
}

