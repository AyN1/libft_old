/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtoupper.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abicer <abicer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/26 17:53:22 by abicer            #+#    #+#             */
/*   Updated: 2019/11/26 20:01:53 by abicer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtoupper(char *str)
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
		newstr[i] = ft_toupper(str[i]);
		++i;
	}
	return (newstr);
}
