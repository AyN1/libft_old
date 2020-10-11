/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abicer <abicer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/14 16:01:16 by abicer            #+#    #+#             */
/*   Updated: 2019/10/25 15:57:19 by abicer           ###   ########.fr       */
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
