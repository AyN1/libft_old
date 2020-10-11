/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abicer <abicer@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 20:30:32 by abicer            #+#    #+#             */
/*   Updated: 2019/05/23 20:38:14 by abicer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Description Assigne la valeur ’\0’ à tous les caractères de la chaîne passée
**	en paramètre.
**
**	Param. #1 La chaîne de caractères à clearer.
**	Retour Rien.
**	Fonctions libc Aucune.
*/

void	ft_strclr(char *s)
{
	size_t	i;

	i = 0;
	if (s)
	{
		while (s[i])
		{
			s[i] = '\0';
			i++;
		}
	}
}
