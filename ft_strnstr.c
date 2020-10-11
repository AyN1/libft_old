/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abicer <abicer@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/14 16:10:03 by abicer            #+#    #+#             */
/*   Updated: 2019/05/30 20:53:27 by abicer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	len_needle;

	i = 0;
	j = 0;
	len_needle = ft_strlen(needle);
	if (!*needle)
		return ((char*)haystack);
	while (haystack[i] && len_needle <= len--)
	{
		j = 0;
		while (haystack[i + j] == needle[j])
		{
			if (!(needle[j + 1]))
				return ((char*)haystack + i);
			j++;
		}
		i++;
	}
	return (0);
}
