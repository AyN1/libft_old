/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abicer <abicer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 19:09:59 by abicer            #+#    #+#             */
/*   Updated: 2019/10/25 15:51:39 by abicer           ###   ########.fr       */
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
