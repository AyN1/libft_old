/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abicer <abicer@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/14 15:56:26 by abicer            #+#    #+#             */
/*   Updated: 2020/10/21 03:11:54 by abicer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int		i;
	int		number;
	int		negative;

	i = 0;
	number = 0;
	while (str[i] == '\t' || str[i] == '\v' || str[i] == '\n' || str[i] == '\r'
											|| str[i] == '\f' || str[i] == ' ')
		i++;
	if (str[i] == '-')
		negative = 1;
	if (str[i] == '+' || str[i] == '-')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		number = number * 10;
		number = number + (str[i] - '0');
		i++;
	}
	if (negative == 1)
		return (-number);
	return (number);
}
