/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daroldan < daroldan@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 03:31:30 by daroldan          #+#    #+#             */
/*   Updated: 2024/04/26 09:45:59 by daroldan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*temp;
	t_list	*final;

	if (!lst || !f || !del)
		return (NULL);
	temp = (ft_lstnew (f(lst->content)));
	if (!temp)
		return (0);
	final = temp;
	lst = lst->next;
	while (lst)
	{
		temp->next = ft_lstnew(f(lst->content));
		if (!temp->next)
		{
			ft_lstclear(&final, del);
		}
		ft_lstadd_back(&temp, final);
		temp = temp->next;
		lst = lst->next;
	}
	temp->next = NULL;
	return (final);
}
