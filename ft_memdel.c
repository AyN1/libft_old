/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abicer <abicer@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 20:04:12 by abicer            #+#    #+#             */
/*   Updated: 2019/05/23 20:09:34 by abicer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Description Prend en paramètre l’adresse d’un pointeur dont la zone pointée
**	doit être libérée avec free(3), puis le pointeur est mis à
**	NULL.
**
**	Param. #1 L’adresse d’un pointeur dont il faut libérer la mémoire puis le
**	mettre à NULL.
**	Retour Rien.
**	Fonctions libc free(3).
*/

void	ft_memdel(void **ap)
{
	if (ap)
	{
		free(*ap);
		*ap = NULL;
	}
}
