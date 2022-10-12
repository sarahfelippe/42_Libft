/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_is.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfelippe <sfelippe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 03:30:40 by sfelippe          #+#    #+#             */
/*   Updated: 2022/09/14 03:34:20 by sfelippe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(void)
{
	int	x;
	int	y;
	int	z;
	int	w;
	int	v;

	x = 'o';
	y = '?';
	z = 'B';
	w = '2';
	v = 0;

	//ft_isalpha
	printf("ft_isalpha\n");
	printf("'True' if return is different than 0 and 'False' if equal to 0\n");
	printf("isalpha return of 'o': %d\n", ft_isalpha(x));
	printf("isalpha return of '?': %d\n", ft_isalpha(y));
	printf("isalpha return of 'B': %d\n", ft_isalpha(z));
	printf("isalpha return of '2': %d\n", ft_isalpha(w));
	printf("isalpha return of 'null': %d\n\n", ft_isalpha(v));

	//ft_isdigit
	printf("ft_isdigit\n");
	printf("'True' if return is different than 0 and 'False' if equal to 0\n");
	printf("isdigit return of 'o': %d\n", ft_isdigit(x));
	printf("isdigit return of '?': %d\n", ft_isdigit(y));
	printf("isdigit return of 'B': %d\n", ft_isdigit(z));
	printf("isdigit return of '2': %d\n", ft_isdigit(w));
	printf("isdigit return of 'null': %d\n\n", ft_isdigit(v));

	//ft_isalnum
	printf("ft_isalnum\n");
	printf("'True' if returns is different than 0 and 'False' if equal to 0\n");
	printf("isalnum return of 'o': %d\n", ft_isalnum(x));
	printf("isalnum return of '?': %d\n", ft_isalnum(y));
	printf("isalnum return of 'B': %d\n", ft_isalnum(z));
	printf("isalnum return of '2': %d\n", ft_isalnum(w));
	printf("isalnum return of 'null': %d\n\n", ft_isalnum(v));

	//ft_isascii
	printf("ft_isascii\n");
	printf("'True' if returns is different than 0 and 'False' if equal to 0\n");
	printf("isascii return of 'o': %d\n", ft_isascii(x));
	printf("isascii return of '?': %d\n", ft_isascii(y));
	printf("isascii return of 'B': %d\n", ft_isascii(z));
	printf("isascii return of '2': %d\n", ft_isascii(w));
	printf("isascii return of 'null': %d\n\n", ft_isascii(v));

	//ft_toupper
	printf("ft_toupper\n");
	printf("toupper return of 'o': %d\n\n", ft_toupper(x));
	
	//ft_tolower
	printf("ft_tolower\n");
	printf("tolowper return of 'B': %d\n\n", ft_tolower(z));

}

