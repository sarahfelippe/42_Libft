/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfelippe <sfelippe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 19:15:59 by sfelippe          #+#    #+#             */
/*   Updated: 2022/09/25 21:54:08 by sfelippe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Function returns a pointer to the first occurence of character 'c' in string 's'
The function returns a pointer  to  the  matched character  or NULL if the 
character is not found.  The terminating null byte is considered part of the 
string, so that if 'c' is specified  as '\0', these functions return a pointer 
to the terminator.
*/

char	*ft_strchr(const char *s, int c)
{
	int	i;

	if (c > 127)
		c = c % 256;
	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i++;
	}
	if (c == 0)
		return ((char *)&s[i]);
	else
		return (NULL);
}
