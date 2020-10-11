/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abicer <abicer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 19:59:08 by abicer            #+#    #+#             */
/*   Updated: 2019/11/22 20:32:40 by abicer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	len;

	if (s1 == NULL || set == NULL)
		return (NULL);
	start = 0;
	while (s1[start] && ft_strchr(set, s1[start]) != NULL)
		start++;
	len = ft_strlen(&s1[start]);
	if (len != 0)
		while (s1[start + len - 1]
				&& ft_strchr(set, s1[start + len - 1]) != NULL)
			len--;
	return (ft_substr(s1, start, len));
}
