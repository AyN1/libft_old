/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abicer <abicer@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 19:09:59 by abicer            #+#    #+#             */
/*   Updated: 2020/10/21 03:12:15 by abicer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Description: Alloue (avec malloc(3)) et retourne une zone de mémoire
**	“fraiche”. La mémoire allouée est initialisée à 0. Si l’allocation
**	échoue, la fonction renvoie NULL.
**
**	Param. #1 La taille de la zone de mémoire à allouer.
**	Retour La zone de mémoire allouée.
**	Fonctions libc malloc(3)
*/

void	*ft_memalloc(size_t size)
{
	void	*memalloc;

	memalloc = NULL;
	if (size)
	{
		memalloc = malloc(size);
		if (!memalloc)
			return (NULL);
		ft_bzero(memalloc, size);
	}
	return (memalloc);
}
