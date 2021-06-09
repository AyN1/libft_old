/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abicer <abicer@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/14 16:00:43 by abicer            #+#    #+#             */
/*   Updated: 2020/10/21 03:12:18 by abicer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t				i;
	unsigned char		*str_dst;
	unsigned const char	*str_src;

	i = 0;
	str_dst = (unsigned char *)dst;
	str_src = (unsigned const char *)src;
	while (i < n)
	{
		str_dst[i] = str_src[i];
		if (str_dst[i] == (unsigned char)c)
			return (str_dst + i + 1);
		++i;
	}
	return (NULL);
}
