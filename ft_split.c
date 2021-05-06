/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abicer <abicer@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/25 18:10:00 by abicer            #+#    #+#             */
/*   Updated: 2020/10/21 03:12:36 by abicer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	*free_tab(char **tab)
{
	if (tab == NULL)
		return (NULL);
	while (*tab != NULL)
		free(*tab++);
	free(tab);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	size_t	i;
	int		j;
	int		k;

	if (s == NULL)
		return (NULL);
	i = 0;
	j = 0;
	tab = (char **)malloc((ft_countword(s, c) + 1) * sizeof(char *));
	if (!tab)
		return (NULL);
	while (i < ft_countword(s, c))
	{
		k = 0;
		tab[i] = ft_strnew(ft_countword(&s[j], c) + 1);
		if (!tab[i])
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
