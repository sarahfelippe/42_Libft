/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfelippe <sfelippe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 22:34:56 by sfelippe          #+#    #+#             */
/*   Updated: 2022/09/22 00:05:28 by sfelippe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Function locates the first occurrence of the null-terminated string little in 
the string big, where not more than len characters are searched.
A null string has no values. It’s an empty char array, one that hasn’t been ass
igned any elements. The string exists in memory, so it’s not a NULL pointer. It
’s just absent any elements. An empty string has a single element, the null cha
racter, '\0'. That’s still a character, and the string has a length of zero, bu
t it’s not the same as a null string, which has no characters at all.
*/

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	b;
	size_t	l;

	if (little[0] == '\0')
		return ((char *)big);
	b = 0;
	l = 0;
	while (big[b] != '\0' && b < len)
	{	
		if (little[0] == big[b])
		{
			while (big[b + l] == little[l] && b + l < len)
			{
				if (little[l + 1] == '\0')
					return ((char *)&big[b]);
				l++;
			}
		}
		b++;
	}
	return (0);
}
