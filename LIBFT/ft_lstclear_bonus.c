/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daroldan < daroldan@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 02:27:00 by daroldan          #+#    #+#             */
/*   Updated: 2023/06/26 19:55:44 by daroldan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*cont;

	if (!del && !lst)
		return ;
	while (*lst)
	{
		cont = (*lst)->next;
		ft_lstdelone (*lst, *del);
		*lst = cont;
	}
}
