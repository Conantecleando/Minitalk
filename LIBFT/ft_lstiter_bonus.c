/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daroldan < daroldan@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 03:18:49 by daroldan          #+#    #+#             */
/*   Updated: 2023/06/26 19:55:55 by daroldan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void*))
{
	t_list	*temp;

	if (!lst && !f)
		return ;
	while (lst)
	{
		temp = (lst)->next;
		(*f)(lst->content);
		lst = temp;
	}
}
