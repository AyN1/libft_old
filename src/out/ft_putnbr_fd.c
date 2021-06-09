/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abicer <abicer@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/26 20:32:02 by abicer            #+#    #+#             */
/*   Updated: 2020/10/21 03:12:32 by abicer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	temp;

	temp = 0;
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		temp = -n;
	}
	else
		temp = n;
	if (temp > 9)
		ft_putnbr_fd(temp / 10, fd);
	ft_putchar_fd(temp % 10 + '0', fd);
}
