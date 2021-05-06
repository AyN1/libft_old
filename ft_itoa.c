/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abicer <abicer@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/25 21:21:06 by abicer            #+#    #+#             */
/*   Updated: 2019/05/30 21:06:57 by abicer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdio.h>

/*
**	Description Alloue (avec malloc(3)) et retourne une chaîne de caractères
**	“fraiche” terminée par un ’\0’ représentant l’entier n passé
**	en paramètre. Les nombres négatifs doivent être gérés. Si l’allocation
**	échoue, la fonction renvoie NULL.
**
**	Param. #1 L’entier à convertir en une chaîne de caractères.
**	Retour La chaîne de caractères représentant l’entier passé en paramètre.
**	Fonctions libc malloc(3)
**
** (Info)line: 59
** assign NULL byte at str[len] and then decrement the variable len
*/

int	ft_len(int n)
{
	int	len;

	len = 0;
	if (n < 0)
	{
		n = n * -1;
		++len;
	}
	while (n > 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int		len;
	char	*str;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	len = ft_len(n);
	str = (char *)malloc(sizeof(char) * len + 1);
	if (!str)
		return (NULL);
	str[len--] = '\0';
	if (!n)
		str[0] = '0';
	if (n < 0)
	{
		str[0] = '-';
		n = n * -1;
	}
	while (n > 0)
	{
		str[len] = (n % 10) + '0';
		n = n / 10;
		len--;
	}
	return (str);
}
