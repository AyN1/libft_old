/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abicer <abicer@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 20:32:42 by abicer            #+#    #+#             */
/*   Updated: 2019/05/23 20:41:08 by abicer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Description Applique la fonction f à chaque caractère de la chaîne de
**	caractères passée en paramètre. Chaque caractère est passé
**	par adresse à la fonction f afin de pouvoir être modifié si
**	nécessaire.
**
**	Param. #1 La chaîne de caractères sur laquelle itérer.
**	Param. #2 La fonction à appeler sur chaque caractère de s.
**	Retour Rien.
**	Fonctions libc Aucune.
*/

void	ft_striter(char *s, void (*f)(char *))
{
	if (f && s)
	{
		while (*s)
		{
			f(s);
			++s;
		}
	}
}
