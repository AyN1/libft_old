/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abicer <abicer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/19 17:20:39 by abicer            #+#    #+#             */
/*   Updated: 2019/11/26 20:23:40 by abicer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	if (lst == NULL)
		return ;
	while (*lst != NULL)
	{
		ft_lstdelone(*lst, del);
		*lst = (*lst)->next;
	}
}
