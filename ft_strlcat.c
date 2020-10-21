/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abicer <abicer@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/16 17:51:51 by abicer            #+#    #+#             */
/*   Updated: 2020/10/21 03:12:53 by abicer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	dst_len;

	i = 0;
	dst_len = ft_strlen(dst);
	if (size <= dst_len)
		return (ft_strlen(src) + size);
	while (dst_len + i < size - 1 && src[i] != '\0')
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	dst[dst_len + i] = '\0';
	return (dst_len + ft_strlen(src));
}
/*
**	int		main(int argc, const char *argv[])
**	{
**		char	*src = "lorem";
**		size_t	size = 15;
**		char	*dest;
**
**		if (!(dest = (char *)malloc(sizeof(*dest) * 15)))
**			return (0);
**		memset(dest, 0, 15);
**		memset(dest, 'r', 6);
**		dest[11] = 'a';
**
**
**		printf("dest = [%s] | src = [%s]\n", dest, src);
**		printf("strlcat = [%lu]\n\n",  strlcat(dest, src, size));
**		printf("dest = [%s] | src = [%s]\n", dest, src);
**		printf("ft_strlcat = [%lu]\n\n",  ft_strlcat(dest, src, size));
**		printf("dest = [%s] | buff2 = [%s]\n", dest, src);
**		return 0;
**	}
*/
