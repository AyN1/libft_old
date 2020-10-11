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
*/

static void	itoa_is_negative(int *n, int *temp)
{
	if (*n < 0)
	{
		*temp = 1;
		*n = -*n;
	}
}

char		*ft_itoa(int n)
{
	int		temp;
	int		len;
	char	*str;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	temp = n;
	len = 2;
	while (temp /= 10)
		++len;
	itoa_is_negative(&n, &temp);
	len += temp;
	if (!(str = (char *)malloc(sizeof(char) * len)))
		return (NULL);
	str[--len] = '\0';
	while (len--)
	{
		str[len] = (n % 10) + '0';
		n = n / 10;
	}
	if (temp)
		str[0] = '-';
	return (str);
}
