/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abicer <abicer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 19:26:43 by abicer            #+#    #+#             */
/*   Updated: 2019/06/06 13:00:27 by abicer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Description Alloue (avec malloc(3)) et retourne la copie “fraiche” d’un
**	tronçon de la chaîne de caractères passée en paramètre. Le
**	tronçon commence à l’index start et a pour longueur len. Si
**	start et len ne désignent pas un tronçon de chaîne valide,
**	le comportement est indéterminé. Si l’allocation échoue, la
**	fonction renvoie NULL.
**
**	Param. #1 La chaîne de caractères dans laquelle chercher le tronçon à
**	copier.
**	Param. #2 L’index dans la chaîne de caractères où débute le tronçon à
**	copier.
**	Param. #3 La longueur du tronçon à copier.
**	Retour Le tronçon.
**	Fonctions libc malloc(3)
*/

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*str;

	if (s)
	{
		i = 0;
		str = ft_strnew(len);
		if (!str)
			return (NULL);
		while (s[start] && i < len)
		{
			str[i] = s[start];
			++i;
			++start;
		}
		str[i] = '\0';
		return (str);
	}
	return (NULL);
}
