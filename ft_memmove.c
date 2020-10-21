/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abicer <abicer@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/14 16:08:28 by abicer            #+#    #+#             */
/*   Updated: 2020/10/21 03:12:24 by abicer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t		i;
	char		*str_dst;
	const char	*str_src;

	i = 0;
	if (dst == src)
		return (dst);
	str_dst = (char *)dst;
	str_src = (const char *)src;
	if (dst || src)
	{
		if (src <= dst)
			while (len--)
				str_dst[len] = str_src[len];
		else
		{
			while (i < len)
			{
				str_dst[i] = str_src[i];
				i++;
			}
		}
		return (dst);
	}
	return (NULL);
}
