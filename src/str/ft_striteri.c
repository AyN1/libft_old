/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abicer <abicer@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 20:37:47 by abicer            #+#    #+#             */
/*   Updated: 2019/05/23 20:50:43 by abicer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Description Applique la fonction f à chaque caractère de la chaîne de
**	caractères passée en paramètre en précisant son index en premier
**	argument. Chaque caractère est passé par adresse à la
**	fonction f afin de pouvoir être modifié si nécessaire.
**
**	Param. #1 La chaîne de caractères sur laquelle itérer.
**	Param. #2 La fonction à appeler sur chaque caractère de s et son index.
**	Retour Rien.
**	Fonctions libc Aucune.
*/

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	size_t	i;

	i = 0;
	if (s && f)
	{
		while (*s)
		{
			f(i, s);
			++s;
			++i;
		}
	}
}
