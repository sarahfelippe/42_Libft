/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfelippe <sfelippe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 21:52:44 by sfelippe          #+#    #+#             */
/*   Updated: 2022/09/26 23:08:58 by sfelippe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

/*
Allocates (with malloc(3)) and returns an array of strings obtained by splitting
’s’ (the string to be split) using the character ’c’ as a delimiter.  The array
must end with a NULL pointer.
The array of new strings resulting from the split, or NULL if allocation fails.
*/

static int	ft_word_count(char *str, char x)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		while (str[i] && str[i] == x)
			i++;
		if (str[i] != '\0')
			count++;
		while (str[i] && str[i] != x)
			i++;
	}
	return (count);
}

static int	ft_word_length(char *str, char x)
{
	int	i;

	i = 0;
	while (str[i] != 0 && str[i] != x)
		i++;
	return (i);
}

char	**ft_split(char const *s, char c)
{
	char	**copy;
	int		count;
	int		length;
	int		j;

	count = ft_word_count((char *)s, c);
	copy = malloc ((count + 1) * sizeof(char *));
	if (!copy)
		return (NULL);
	j = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s != '\0')
		{
			length = ft_word_length((char *)s, c);
			copy[j] = ft_substr((char *)s, 0, length);
			j++;
		}
		while (*s && *s != c)
			s++;
	}
	copy[j] = 0;
	return (copy);
}
