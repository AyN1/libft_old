/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abicer <abicer@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/14 16:10:06 by abicer            #+#    #+#             */
/*   Updated: 2019/05/17 15:33:15 by abicer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!*needle)
		return ((char*)haystack);
	while (haystack[i])
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
	return (NULL);
}
