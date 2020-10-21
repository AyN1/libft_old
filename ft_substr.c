/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abicer <abicer@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/25 17:26:35 by abicer            #+#    #+#             */
/*   Updated: 2020/10/21 03:13:15 by abicer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*new_str;

	if (s == NULL)
		return (NULL);
	if ((new_str = ft_strnew(len)) == NULL)
		return (NULL);
	if (start > ft_strlen(s))
		return (new_str);
	return (ft_strncpy(new_str, &s[start], len));
}
