/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfelippe <sfelippe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 20:08:47 by sfelippe          #+#    #+#             */
/*   Updated: 2022/09/26 02:15:53 by sfelippe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

/*
Allocates (with malloc(3)) and returns a substring from the string ’s’.
The substring begins at index ’start’ and is of maximum size ’len’.
Function return the substring, and NULL if the allocation fails.
*/

static char	*ft_np(void)
{
	char	*np;

	np = (char *) malloc(sizeof(char));
	np[0] = 0;
	return (np);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*substring;
	unsigned int	j;
	size_t			max;

	if (!s)
		return (NULL);
	max = ft_strlen(s);
	if (start > max)
		return (ft_np());
	if (len >= max)
		len = max - start;
	substring = (char *) malloc((len + 1) * sizeof(char));
	if (!substring)
		return (NULL);
	j = 0;
	while (s[start] != '\0' && j < len)
	{
		substring[j] = (char) s[start];
		start++;
		j++;
	}
	substring[j] = '\0';
	return (substring);
}
