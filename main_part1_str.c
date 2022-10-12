/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfelippe <sfelippe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 22:12:06 by sfelippe          #+#    #+#             */
/*   Updated: 2022/09/16 02:53:08 by sfelippe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(void)
{
	char	string_1[] = "Hello!";
	char	string_2[] = "Hello, all!";
	char	string_3[] = "How Is Everyone?";
	char	*string_4 = NULL;

	printf("string_1 is '%s'\n", string_1);
	printf("string_2 is '%s'\n", string_2);
	printf("string_3 is '%s'\n", string_3);
	printf("string_4 is '%s'\n\n", string_4);
	
	//ft_strlen
	printf("ft_strlen\n");
	printf("size of string_1 is: %zu\n\n", ft_strlen(string_1));

	//ft_strncmp
	printf("ft_strncmp\n");
	printf("string_1 - string_2 até o 5º caracter: %d\n", ft_strncmp(string_1, string_2, 5));
	printf("string_1 - string_3 até o 5º caracter: %d\n", ft_strncmp(string_1, string_3, 5));
	printf("string_2 - string_3 até o 5º caracter: %d\n\n", ft_strncmp(string_2, string_3, 5));

	//ft_strnstr
	printf("ft_strnstr\n");
	printf("string_1: %s\n", string_1);
	printf("string_2: %s\n", string_2);
	printf("localização da string_2: %p\n", string_2);
	printf("localização da string_1 na string_2: %p\n\n", ft_strnstr(string_2, string_1, 4));

	//ft_strlcpy
	printf("ft_strlcpy\n");
	printf("return of ft_strlcpy(2, 1, sizeof(2)): %zu\n", ft_strlcpy(string_2, string_1, sizeof(string_2)));
	printf("string_2 after function 1 is copied to 2: %s\n", string_2);
	printf("return of ft_strlcpy(3, 1, sizeof(3)): %zu\n", ft_strlcpy(string_3, string_1, sizeof(string_3)));
	printf("string_3 after function 1 is copied to 3: %s\n\n", string_3);

	//ft_strlen
	printf("ft_strdup\n");
	printf("original string_4: %s\n", string_4);
	printf("string_4 after dup from string_1: %s\n\n", (string_4 = ft_strdup(string_1)));

	//ft_strlcat
	printf("ft_strlcat\n");
	printf("string_2 before function: %s\n", string_2);
	printf("string_3 before function: %s\n", string_3);
	printf("return of ft_strlcat(2, 3, sizeof(2)): %zu\n", ft_strlcat(string_2, string_3, sizeof(string_2)));
	printf("string_2 after function: %s\n", string_2);
	printf("string_3 after function: %s\n\n", string_3);

	//ft_strchr
	printf("ft_strchr\n");
	printf("string_2: %s\n", string_2);
	printf("location of first char of string_2: %p\n", string_2);
	printf("location of first 'x' of string_2: %p\n", ft_strchr(string_2, 'x'));
	printf("location of first 'o' of string_2: %p\n", ft_strchr(string_2, 'o'));
	printf("location of null in string_2: %p\n\n", ft_strchr(string_2, 0));

	//ft_strrchr
	printf("ft_strrchr\n");
	printf("string_2: %s\n", string_2);
	printf("location of first char of string_2: %p\n", string_2);
	printf("location of last 'x' of string_2: %p\n", ft_strrchr(string_2, 'x'));
	printf("location of last 'l' of string_2: %p\n", ft_strrchr(string_2, 'l'));
	printf("location of null in string_2: %p\n\n", ft_strrchr(string_2, 0));

}