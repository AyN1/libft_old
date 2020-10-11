/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abicer <abicer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/15 23:00:41 by abicer            #+#    #+#             */
/*   Updated: 2020/01/14 18:29:17 by abicer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;

	if (s == NULL)
		return (NULL);
	i = ft_strlen(s);
	while (s[i] != c && i > 0)
		--i;
	if (i == 0 && s[i] != c)
		return (NULL);
	return ((char*)s + i);
}
