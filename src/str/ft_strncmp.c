/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abicer <abicer@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/14 16:09:59 by abicer            #+#    #+#             */
/*   Updated: 2020/10/21 03:13:01 by abicer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t				i;
	const unsigned char	*str_s1;
	const unsigned char	*str_s2;

	i = 0;
	str_s1 = (const unsigned char *)s1;
	str_s2 = (const unsigned char *)s2;
	if (!*s1 && !*s2)
		return (0);
	while (i < n)
	{
		if ((s1[i] != s2[i]) || (!s1[i] && !s2[i]))
			return (str_s1[i] - str_s2[i]);
		++i;
	}
	return (0);
}
