/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abicer <abicer@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 20:10:39 by abicer            #+#    #+#             */
/*   Updated: 2019/05/23 20:24:24 by abicer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Description Alloue (avec malloc(3)) et retourne une chaîne de caractère
**	“fraiche” terminée par un ’\0’. Chaque caractère de la chaîne
**	est initialisé à ’\0’. Si l’allocation echoue, la fonction renvoie
**	NULL.
**
**	Param. #1 La taille de la chaîne de caractères à allouer.
**	Retour La chaîne de caractères allouée et initialisée à 0.
**	Fonctions libc malloc(3)
*/

char	*ft_strnew(size_t size)
{
	return ((char*)ft_memalloc(size + 1));
}
