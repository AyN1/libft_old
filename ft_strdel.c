/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abicer <abicer@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 20:24:48 by abicer            #+#    #+#             */
/*   Updated: 2019/05/23 20:30:24 by abicer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Description Prend en paramètre l’adresse d’une chaîne de caractères qui
**	doit être libérée avec free(3) et son pointeur mis à NULL.
**
**	Param. #1 L’adresse de la chaîne de caractère dont il faut libérer
**	la mémoire
**	et mettre le pointeur à NULL.
**	Retour Rien.
**	Fonctions libc Free(3).
*/

void	ft_strdel(char **as)
{
	ft_memdel((void*)as);
}
