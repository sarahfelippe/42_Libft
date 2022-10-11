/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfelippe <sfelippe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 23:50:53 by sfelippe          #+#    #+#             */
/*   Updated: 2022/09/23 00:33:37 by sfelippe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

#include <stdio.h>

/*
Applies the function ’f’ to each character of the string ’s’, and passing its 
index as first argument to create a new string (with malloc(3)) resulting from 
successive applications of ’f’.
Function returns the string created from the successive applications of ’f’, or 
NULL if the allocation fails.
Function strmapi applies function 'f' to each character of string s, returning 
a type char (for this exercise, it doesn't matter what function f does). Function
ft_strmapi returns a new string, which is the result of applying f to s.
*/

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*new;
	unsigned int	i;

	new = (char *) malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!new)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		new[i] = f(i, s[i]);
		i++;
	}
	new[i] = '\0';
	return ((char *) new);
}
