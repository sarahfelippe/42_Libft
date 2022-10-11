/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfelippe <sfelippe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 21:45:59 by sfelippe          #+#    #+#             */
/*   Updated: 2022/09/26 02:25:21 by sfelippe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

/*
Allocates (with malloc(3)) and returns a copy of ’s1’(the string to be trimmed) 
with the characters specified in ’set’ (referenced set of characters to trim) 
removed from the beginning and the end of the string.
Function returns the trimmed string, or NULL if allocation fails.
*/

char	*ft_strtrim(char const *s1, char const *set)
{
	char			*copy;
	unsigned int	start;
	unsigned int	end;

	start = 0;
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	end = ft_strlen(s1);
	if (start == end)
	{
		copy = (char *) malloc(sizeof(char));
		copy[0] = 0;
		return (copy);
	}	
	while (end > start && ft_strrchr(set, s1[end]))
		end--;
	copy = ft_substr(s1, start, end - start + 1);
	return (copy);
}
