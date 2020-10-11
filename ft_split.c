/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abicer <abicer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/25 18:10:00 by abicer            #+#    #+#             */
/*   Updated: 2019/11/20 20:40:30 by abicer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void		*free_tab(char **tab)
{
	if (tab == NULL)
		return (NULL);
	while (*tab != NULL)
		free(*tab++);
	free(tab);
	return (NULL);
}

char			**ft_split(char const *s, char c)
{
	char	**tab;
	size_t	i;
	int		j;
	int		k;

	if (s == NULL)
		return (NULL);
	i = 0;
	j = 0;
	if (!(tab = (char **)malloc((ft_countword(s, c) + 1) * sizeof(char *))))
		return (NULL);
	while (i < ft_countword(s, c))
	{
		k = 0;
		if (!(tab[i] = ft_strnew(ft_countword(&s[j], c) + 1)))
			return (free_tab(tab));
		while (s[j] == c)
			++j;
		while (s[j] && s[j] != c)
			tab[i][k++] = s[j++];
		tab[i][k] = '\0';
		++i;
	}
	tab[ft_countword(s, c)] = NULL;
	return (tab);
}

/*
**	int	main(int argc, char **argv)
**	{
**		size_t word = ft_countword("Je suis une phrase", ' ');
**		printf ("%zu mots\n\n\n", word);
**		char **tab = ft_split("-oui-----couco-------------cv-", '-');
**		while (*tab)
**			printf("elem: |%s|\n", *tab++);
**		return (1);
**	}
*/
