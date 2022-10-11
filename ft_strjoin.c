/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfelippe <sfelippe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 20:44:13 by sfelippe          #+#    #+#             */
/*   Updated: 2022/09/19 00:34:14 by sfelippe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

/*
Allocates (with malloc(3)) and returns a new string, which is the result of the 
concatenation of ’s1’ (prefix string) and ’s2’ (suffix string).
Function returns the new string, and NULL if allocation fails.
*/

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new;
	int		size_new;
	int		i1;
	int		i2;

	size_new = ft_strlen((char *)s1) + ft_strlen((char *)s2);
	new = (char *) malloc((size_new + 1) * sizeof(char));
	if (!new)
		return (NULL);
	i1 = 0;
	while (s1[i1] != '\0')
	{
		new[i1] = s1[i1];
		i1++;
	}
	i2 = 0;
	while (s2[i2] != '\0')
	{
		new[i1] = s2[i2];
		i2++;
		i1++;
	}
	new[i1] = '\0';
	return (new);
}
