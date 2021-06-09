/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abicer <abicer@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 19:46:50 by abicer            #+#    #+#             */
/*   Updated: 2020/10/21 03:12:52 by abicer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Description Alloue (avec malloc(3)) et retourne une chaîne de caractères
**	“fraiche” terminée par un ’\0’ résultant de la concaténation
**	de s1 et s2. Si l’allocation echoue, la fonction renvoie NULL.
**
**	Param. #1 La chaîne de caractères préfixe.
**	Param. #2 La chaîne de caractères suffixe.
**	Retour La chaîne de caractère “fraiche” résultant de la concaténation
**	des deux chaînes.
**	Fonctions libc malloc(3)
*/

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	char	*str;

	if (!s1 || !s2)
		return (NULL);
	else
	{
		i = 0;
		str = ft_memalloc(ft_strlen(s1) + ft_strlen(s2) + 1);
		if (!str)
			return (NULL);
		ft_memcpy(str, s1, ft_strlen(s1));
		ft_strcat(str, s2);
		return (str);
	}
	return (NULL);
}
