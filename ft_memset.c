/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfelippe <sfelippe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 23:18:13 by sfelippe          #+#    #+#             */
/*   Updated: 2022/09/24 20:56:29 by sfelippe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* 
Function replaces an amount of 'n' bytes of a memory area 's' by byte 'c'.
In the loop, expression 'string[i] != 0' is not needed, because MEM deals with 
any memory area, not just memory until the character null (strings)
Function returns a pointer to the memory area 's'.
*/

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;
	char	*ptr;

	i = 0;
	ptr = (char *) s;
	while (i < n)
	{
		ptr[i] = (char) c;
		i++;
	}
	return (ptr);
}
