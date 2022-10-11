/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfelippe <sfelippe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 20:29:31 by sfelippe          #+#    #+#             */
/*   Updated: 2022/09/25 21:55:05 by sfelippe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Function returns a pointer to the last occurence of character 'c' in string 's'
The function returns a pointer  to  the  matched character  or NULL if the 
character is not found.  The terminating null byte is considered part of the 
string, so that if 'c' is specified  as '\0', these functions return a pointer 
to the terminator.
*/

char	*ft_strrchr(const char *s, int c)
{
	int		i;

	if (c > 127)
		c = c % 256;
	i = ft_strlen(s);
	while (i >= 0)
	{	
		if (s[i] == c)
			return ((char *)&s[i]);
		i--;
	}
	return (0);
}
