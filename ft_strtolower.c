/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtolower.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abicer <abicer@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/26 17:38:34 by abicer            #+#    #+#             */
/*   Updated: 2020/10/21 03:13:11 by abicer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtolower(char *str)
{
	char	*newstr;
	int		i;

	i = 0;
	if (str == NULL)
		return (NULL);
	newstr = (char*)malloc(ft_strlen(str) + 1);
	if (newstr == NULL)
		return (NULL);
	ft_strcpy(newstr, str);
	while (newstr[i] != '\0')
	{
		newstr[i] = ft_tolower(str[i]);
		++i;
	}
	return (newstr);
}
