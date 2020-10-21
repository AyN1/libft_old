/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abicer <abicer@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/14 16:01:16 by abicer            #+#    #+#             */
/*   Updated: 2020/10/21 03:11:50 by abicer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	const unsigned char	*str_s1;
	const unsigned char	*str_s2;

	i = 0;
	str_s1 = (const unsigned char *)s1;
	str_s2 = (const unsigned char *)s2;
	if (!str_s1 && !str_s2)
		return (0);
	while (i < n)
	{
		if (str_s1[i] != str_s2[i])
			return (str_s1[i] - str_s2[i]);
		++i;
	}
	return (0);
}
