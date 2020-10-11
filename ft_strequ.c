/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abicer <abicer@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 19:15:10 by abicer            #+#    #+#             */
/*   Updated: 2019/05/24 19:22:15 by abicer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Description Compare lexicographiquement s1 et s2. Si les deux chaînes
**	sont égales, la fonction retourne 1, ou 0 sinon.
**
**	Param. #1 La première des deux chaînes à comparer.
**	Param. #2 La seconde des deux chaînes à comparer.
**	Retour 1 ou 0 selon que les deux chaînes sont égales ou non.
**	Fonctions libc Aucune.
*/

int	ft_strequ(char const *s1, char const *s2)
{
	size_t	i;

	if (s1 && s2)
	{
		i = 0;
		while (s1[i] == s2[i] && s1[i] && s2[i])
			i++;
		if (!s1[i] && !s2[i])
			return (1);
		else
			return (0);
	}
	return (0);
}
