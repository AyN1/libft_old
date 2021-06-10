/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abicer <abicer@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/10 18:40:02 by abicer            #+#    #+#             */
/*   Updated: 2021/06/10 22:42:30 by abicer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** no overflow
*/

#include "libft.h"
#include <stdio.h>
#define LONG_MAX 0x7fffffffffffffff
#define LONG_MIN -0x8000000000000000

long	ft_atol(const char *str)
{
	long	res;
	int		sign;

	while (ft_iswhitespace(*str))
		str++;
	sign = 1;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	res = 0;
	while (ft_isdigit(*str))
	{
		if (res < LONG_MAX)
			res = 10 * res + (*str - '0');
		if (res < 0 && sign == -1)
			res = LONG_MIN;
		if (res < 0 && sign == 1)
			res = LONG_MAX;
		str++;
	}
	return (res * sign);
}
