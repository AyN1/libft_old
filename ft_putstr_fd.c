/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abicer <abicer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/26 20:23:32 by abicer            #+#    #+#             */
/*   Updated: 2019/06/19 17:55:04 by abicer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

void	ft_putstr_fd(char const *s, int fd)
{
	if (s)
		write(fd, s, ft_strlen(s));
}