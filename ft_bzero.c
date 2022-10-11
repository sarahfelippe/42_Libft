/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfelippe <sfelippe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 23:17:31 by sfelippe          #+#    #+#             */
/*   Updated: 2022/09/24 19:10:52 by sfelippe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* 
Function works similar to memset, replacing an amount of 'n' bytes of a memory
area 's' by zero (null character).
in the loop, expression 'string[i] != 0' is not needed, because MEM deals with 
any memory area, not just memory until the character null (strings)
*/

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*ptr;

	i = 0;
	ptr = (char *) s;
	while (i < n)
	{
		ptr[i] = '\0';
		i++;
	}
}
