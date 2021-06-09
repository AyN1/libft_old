/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abicer <abicer@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/16 16:21:42 by abicer            #+#    #+#             */
/*   Updated: 2020/10/21 03:12:06 by abicer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list	*last;

	if (!alst || !new)
		return ;
	last = *alst;
	new->next = NULL;
	if (*alst == NULL)
	{
		*alst = new;
		return ;
	}
	else
	{
		while (last->next != NULL)
			last = last->next;
		last->next = new;
	}
}
