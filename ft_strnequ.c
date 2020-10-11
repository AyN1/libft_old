/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abicer <abicer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 19:22:55 by abicer            #+#    #+#             */
/*   Updated: 2019/06/04 05:20:53 by abicer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Description Compare lexicographiquement s1 et s2 jusqu’à n caractères
**	maximum ou bien qu’un ’\0’ ait été rencontré. Si les deux
**	chaînes sont égales, la fonction retourne 1, ou 0 sinon.
**
**	Param. #1 La première des deux chaînes à comparer.
**	Param. #2 La seconde des deux chaînes à comparer.
**	Param. #3 Le nombre de caractères à comparer au maximum.
**	Retour 1 ou 0 selon que les deux chaînes sont égales ou non.
**	Fonctions libc Aucune.
*/

int	ft_strnequ(char const *s1, char const *s2, size_t n)
{
	size_t	i;

	if (s1 && s2)
	{
		i = 0;
		while (s1[i] == s2[i] && s1[i] && s2[i] && i < (n - 1))
			++i;
		if (s1[i] == s2[i])
			return (1);
		else
			return (!n ? 1 : 0);
	}
	return (0);
}