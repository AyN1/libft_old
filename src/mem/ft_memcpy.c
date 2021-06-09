/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abicer <abicer@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/14 16:08:02 by abicer            #+#    #+#             */
/*   Updated: 2020/10/21 03:12:21 by abicer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t		i;
	char		*ptr_dst;
	const char	*ptr_src;

	i = 0;
	if (dst == src)
		return (dst);
	ptr_dst = (char *)dst;
	ptr_src = (const char *)src;
	if (dst || src)
	{
		while (i < n)
		{
			ptr_dst[i] = ptr_src[i];
			++i;
		}
		return (dst);
	}
	return (0);
}
