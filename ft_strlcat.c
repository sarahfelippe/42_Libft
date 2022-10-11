/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfelippe <sfelippe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 00:29:25 by sfelippe          #+#    #+#             */
/*   Updated: 2022/09/25 22:14:27 by sfelippe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
To compile function strlcat
#include <string.h>
#include <bsd/string.h> // compilation must add -lbsd

The strlcat() function concatenate strings with the same input paramete
rs and output result as snprintf(3). It is designed to be safer, more con
sistent, and less error prone replacements for the easily misused functio
n and strncat(3).

strlcat() takes the full size of the destination buffer and guarantee 
NUL-termination if there is room.  Note that room for the NUL should be 
included in dstsize

strlcat() appends string src to the end of dst.  It will append at most
dstsize - strlen(dst) - 1 characters.  It will then NUL-terminate, unless
dstsize is 0 or the original dst string was longer than dstsize (in prac-
tice this should not happen as it means that either dstsize is incorrect
or that dst is not a proper string).

If the src and dst strings overlap, the behavior is undefined.

the strlcat() function returns the total length of the string it tries 
to create.  For strlcat() that means the initial length of dst plus the 
length of src. If the return value is >= dstsize, the output string has 
been truncated. It is the caller's responsibility to handle this.
*/

size_t	ft_strlcat(char *dst, const char *src, size_t dst_size)
{
	size_t	d;
	size_t	s;
	size_t	i;

	s = ft_strlen(src);
	d = ft_strlen(dst);
	if (dst_size <= d)
		return (dst_size + s);
	i = 0;
	while (src[i] != '\0' && d + i < dst_size - 1)
	{
		dst[d + i] = src[i];
		i++;
	}
	dst[d + i] = '\0';
	return (d + s);
}
