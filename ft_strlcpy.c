/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfelippe <sfelippe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 22:31:08 by sfelippe          #+#    #+#             */
/*   Updated: 2022/09/25 22:15:21 by sfelippe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
To compile function strlcat
#include <string.h>
#include <bsd/string.h> // compilation must add -lbsd

The strlcpy() function copies strings with the same input parameters 
and output result as snprintf(3). It is designed to be safer, more con
sistent, and less error prone replacements for the easily misused func
tion and strncpy(3).

strlcpy() takes the full size of the destination buffer and guarantee 
NUL-termination if there is room.  Note that room for the NUL should be 
included in dstsize

strlcpy() copies up to dstsize - 1 characters from the string src to 
dst, NUL-terminating the result if dstsize is not 0.

If the src and dst strings overlap, the behavior is undefined.

strlcpy copies a NULL terminated string (src) into a sized destinatio
n (dst) and strlcpy returns the size of src

the strlcpy() function returns the total length of the string it tries 
to create.  For strlcpy() that means the length of src. If the return va
lue is >= dstsize, the output string has been truncated. It is the calle
r's responsibility to handle this.
*/

size_t	ft_strlcpy(char *dst, const char *src, size_t dst_size)
{
	size_t	s;
	size_t	d;

	s = ft_strlen(src);
	if (dst_size == 0)
		return (s);
	d = 0;
	while (src[d] != '\0' && d < (dst_size - 1))
	{
		dst[d] = src[d];
		d++;
	}
	dst[d] = '\0';
	return (s);
}
