/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_atoi.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfelippe <sfelippe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 23:59:32 by sfelippe          #+#    #+#             */
/*   Updated: 2022/09/14 03:39:30 by sfelippe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

int	main(void)
{
	char *string_1 = "23455";
	char *string_3 = "00234";
	char *string_4 = "+2abc";
	char *string_5 = "abcde";
	char *string_7 = "d423e";
	char *string_8 = "00000";
	char *string_9 = "-23d4";
	char *string_10 = "d42-3";
	char *string_11 = "00-00";
	char *string_12 = " 23 5";
	char *string_13 = "  2 5";
	char *string_14 = " -423";
	
	printf("%s	- atoi: %d	- ft_atoi: %d\n", string_1, atoi(string_1), ft_atoi(string_1));
	printf("%s	- atoi: %d	- ft_atoi: %d\n", string_3, atoi(string_3), ft_atoi(string_3));
	printf("%s	- atoi: %d	- ft_atoi: %d\n", string_4, atoi(string_4), ft_atoi(string_4));
	printf("%s	- atoi: %d	- ft_atoi: %d\n", string_5, atoi(string_5), ft_atoi(string_5));
	printf("%s	- atoi: %d	- ft_atoi: %d\n", string_7, atoi(string_7), ft_atoi(string_7));
	printf("%s	- atoi: %d	- ft_atoi: %d\n", string_8, atoi(string_8), ft_atoi(string_8));
	printf("%s	- atoi: %d	- ft_atoi: %d\n", string_9, atoi(string_9), ft_atoi(string_9));
	printf("%s	- atoi: %d	- ft_atoi: %d\n", string_10, atoi(string_10), ft_atoi(string_10));
	printf("%s	- atoi: %d	- ft_atoi: %d\n", string_11, atoi(string_11), ft_atoi(string_11));
	printf("%s	- atoi: %d	- ft_atoi: %d\n", string_12, atoi(string_12), ft_atoi(string_12));
	printf("%s	- atoi: %d	- ft_atoi: %d\n", string_13, atoi(string_13), ft_atoi(string_13));
	printf("%s	- atoi: %d	- ft_atoi: %d\n", string_14, atoi(string_14), ft_atoi(string_14));	
}