/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfelippe <sfelippe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 22:36:09 by sfelippe          #+#    #+#             */
/*   Updated: 2022/09/20 02:55:44 by sfelippe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Function checks if 'c' is a number
*/

int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (!0);
	else
		return (0);
}
