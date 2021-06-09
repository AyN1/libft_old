/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abicer <abicer@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 20:48:12 by abicer            #+#    #+#             */
/*   Updated: 2019/05/23 21:27:06 by abicer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Description Applique la fonction f à chaque caractère de la chaîne de
**	caractères passée en paramètre pour créer une nouvelle chaîne
**	“fraiche” (avec malloc(3)) résultant des applications successives
**	de f.
**
**	Param. #1 La chaîne de caractères sur laquelle itérer.
**	Param. #2 La fonction à appeler sur chaque caractère de s.
**	Retour La chaîne “fraiche” résultant des applications successives de f.
**	Fonctions libc malloc(3)
*/

char	*ft_strmap(char const *s, char (*f)(char))
{
	size_t	i;
	char	*str;

	if (s && f)
	{
		i = 0;
		str = ft_strnew(ft_strlen(s));
		if (!str)
			return (NULL);
		while (s[i])
		{
			str[i] = f(s[i]);
			++i;
		}
		str[i] = '\0';
		return (str);
	}
	return (NULL);
}
