/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfelippe <sfelippe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 23:18:01 by sfelippe          #+#    #+#             */
/*   Updated: 2022/09/24 20:55:40 by sfelippe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* 
Function copies 'n' bytes from memory area 'src' to memory area 'dest' (areas 
must not overlap). In the loop, expression 'string[i] != 0' is not needed, 
because MEM deals with any memory area, not just memory until the character 
null (strings)'.
Function returns a pointer to 'dest'.
*/

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*ptr_d;
	char	*ptr_s;

	i = 0;
	ptr_d = (char *) dest;
	ptr_s = (char *) src;
	while (i < n)
	{
		ptr_d[i] = ptr_s[i];
		i++;
	}
	return (dest);
}
