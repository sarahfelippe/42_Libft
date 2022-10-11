/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfelippe <sfelippe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 23:17:47 by sfelippe          #+#    #+#             */
/*   Updated: 2022/09/18 00:44:57 by sfelippe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* 
Function scans the first 'n' bytes of memory area pointed to by 's' for the fir
st occurence of 'c', and returns a pointer to the matching by or NULL if 'c' do
esn't occur in 's'.
in the loop, expression 'string[i] != 0' is not needed, because MEM deals with 
any memory area, not just memory until the character null (strings)
*/

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	char	*ptr;
	char	a;

	a = (char) c;
	ptr = (char *) s;
	i = 0;
	while (a != ptr[i] && i < n)
		i++;
	if (i == n)
		return (ptr = 0);
	return (&ptr[i]);
}
