/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bslakey <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/06 14:39:21 by bslakey           #+#    #+#             */
/*   Updated: 2016/10/22 00:03:00 by bslakey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

void	print_bits(unsigned char octet)
{
	int i;

	i = 128;
	while (i > 0)
	{
		if ((octet & i) == i)
			write(1, "1", 1);
		else
			write(1, "0", 1);
		i /= 2;
	}
}
