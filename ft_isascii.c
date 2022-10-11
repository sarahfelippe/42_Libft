/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfelippe <sfelippe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 22:36:35 by sfelippe          #+#    #+#             */
/*   Updated: 2022/09/20 02:55:32 by sfelippe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Function checks if 'c' is an ASCII character
*/

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (!0);
	else
		return (0);
}
