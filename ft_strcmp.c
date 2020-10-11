/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abicer <abicer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/14 16:08:45 by abicer            #+#    #+#             */
/*   Updated: 2019/06/04 05:20:43 by abicer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strcmp(const char *s1, const char *s2)
{
	size_t			i;

	i = 0;
	if (!*s1 && !*s2)
		return (0);
	while (s1[i] == s2[i] && s1[i] && s2[i])
		i++;
	return (((unsigned char*)s1)[i] - ((unsigned char*)s2)[i]);
}
