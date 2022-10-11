/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfelippe <sfelippe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 22:36:38 by sfelippe          #+#    #+#             */
/*   Updated: 2022/09/20 02:58:20 by sfelippe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Function checks if 'c' is a printable character (letters, numbers, special char
acter, and space)
*/

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (!0);
	else
		return (0);
}
