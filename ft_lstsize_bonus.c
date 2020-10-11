/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abicer <abicer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/16 15:52:38 by abicer            #+#    #+#             */
/*   Updated: 2019/11/26 20:21:53 by abicer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	size_lst;

	size_lst = 0;
	while (lst != NULL)
	{
		++size_lst;
		lst = lst->next;
	}
	return (size_lst);
}
