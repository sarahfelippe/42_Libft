/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_mem.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfelippe <sfelippe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 23:18:47 by sfelippe          #+#    #+#             */
/*   Updated: 2022/09/11 01:34:03 by sfelippe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(void)
{
	char string_1[] = "Hello, all of you!";
	char string_2[] = "Hello, all of you!";
	char string_3[] = "Hellooooo, all of you!";
	char string_4[] = "Go to hell";
	char string_5[] = "Hellooooo, all of you!";
	char string_6[] = "Go to hell";

	//ft_memset
	printf("ft_memset\n");
	printf("string_1: %s\n", string_1);
	ft_memset(string_1 + 4, 'o', 9*sizeof(char));
	printf("string after ft_memset: %s\n\n", string_1);

	//ft_bzero
	printf("ft_bzero\n");
	printf("string_2: %s\n", string_2);
	ft_bzero(string_2 + 4, 9*sizeof(char));
	printf("string after ft_bzero: %s\n\n", string_2);

	//ft_memcpy
	printf("ft_memcpy\n");
	printf("string_3: %s\n", string_3);
	printf("string_4: %s\n", string_4);
	ft_memcpy(string_3, string_4, 10*sizeof(char));
	printf("string after ft_memcpy: %s\n\n", string_3);
	
	//ft_memmove
	printf("ft_memmove\n");
	printf("string_5: %s\n", string_5);
	printf("string_6: %s\n", string_6);
	ft_memmove(string_5, string_6, 10*sizeof(char));
	printf("string after ft_memmove: %s\n\n", string_5);

	//ft_memchr
    printf("ft_memchr\n");
    printf("string_6: %s\n", string_6);
    printf("location of first char of string_6: %p\n", string_6);
    printf("location of first 'x' of string_6: %p\n", ft_memchr(string_6, 'x', 10));
    printf("location of first 't' of string_6: %p\n\n", ft_memchr(string_6, 't', 10));

	//ft_memcmp
	printf("ft_memcmp\n");
	printf("string_1: %s\n", string_1);
	printf("string_2: %s\n", string_2);
	printf("string_3: %s\n", string_3);
	printf("string_1 - string_2 até o 5º caracter: %d\n", ft_memcmp(string_1, string_2, 5));
	printf("string_1 - string_2 até o 4º caracter: %d\n", ft_memcmp(string_1, string_2, 4));
	printf("string_3 - string_1 até o 5º caracter: %d\n\n", ft_memcmp(string_3, string_1, 5));

}
