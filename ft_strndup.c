/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abicer <abicer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/20 20:36:21 by abicer            #+#    #+#             */
/*   Updated: 2019/11/20 20:36:54 by abicer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strndup(const char *s1, size_t n)
{
	char	*clone;

	if ((clone = ft_strnew(n)) == NULL)
		return (NULL);
	return (ft_strncpy(clone, s1, n));
}
