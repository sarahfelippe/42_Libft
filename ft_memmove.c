/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfelippe <sfelippe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 23:18:07 by sfelippe          #+#    #+#             */
/*   Updated: 2022/09/20 23:33:13 by sfelippe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* 
Function copies 'n' bytes from memory area 'src' to memory area 'dest'. Memory 
areas may overlap (bytes of 'src' are first copied to a temporary array, and 
from the temporary to 'dest').In the loop, expression 'string[i] != 0' is not 
needed, because MEM deals with any memory area, not just memory until the 
character null (strings).
Function returns a pointer to 'dest'
*/

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t		i;
	char		*ptr_d;
	char		*ptr_s;

	ptr_s = (char *) src;
	ptr_d = (char *) dest;
	i = 0;
	if (ptr_d > ptr_s)
	{
		while (n-- > 0)
			ptr_d[n] = ptr_s[n];
	}
	else
	{
		while (i < n)
		{
			ptr_d[i] = ptr_s[i];
			i++;
		}
	}
	return (dest);
}
