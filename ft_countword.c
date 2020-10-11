/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countword.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abicer <abicer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/31 19:52:58 by abicer            #+#    #+#             */
/*   Updated: 2019/06/04 05:20:20 by abicer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_countword(char const *s, char c)
{
	size_t	words_nbr;
	size_t	i;

	words_nbr = 0;
	i = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c)
			++i;
		if (s[i] && s[i] != c)
			++words_nbr;
		while (s[i] && s[i] != c)
			++i;
	}
	return (words_nbr);
}
