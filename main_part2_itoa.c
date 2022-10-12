/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_part2_itoa.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfelippe <sfelippe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 20:38:57 by sfelippe          #+#    #+#             */
/*   Updated: 2022/09/25 22:52:02 by sfelippe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(void)
{
	int a = -857;
	int b = 857;
	int c = -2147483648;
	long int d = 2147483648;
	long int e = -2147483649;
	int f = 2147483647;
	
	//ft_itoa
	printf("ft_itoa\n");
	printf("number: %d, string: %s\n", a, ft_itoa(a));
	printf("number: %d, string: %s\n", b, ft_itoa(b));
	printf("number: %d, string: %s\n", c, ft_itoa(c));
	printf("number: %ld, string: %s\n", d, ft_itoa(d));
	printf("number: %ld, string: %s\n", e, ft_itoa(e));
	printf("number: %d, string: %s\n", f, ft_itoa(f));
}
