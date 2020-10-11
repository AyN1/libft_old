/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abicer <abicer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/14 16:08:48 by abicer            #+#    #+#             */
/*   Updated: 2019/06/05 12:06:34 by abicer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	i;
	char	*s1_cpy;

	i = 0;
	s1_cpy = (char*)malloc(ft_strlen(s1) + 1);
	if (s1_cpy == NULL)
		return (NULL);
	while (s1[i])
	{
		s1_cpy[i] = s1[i];
		i++;
	}
	s1_cpy[i] = '\0';
	return (s1_cpy);
}
