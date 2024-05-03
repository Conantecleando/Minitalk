/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daroldan < daroldan@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 23:35:26 by davidrol          #+#    #+#             */
/*   Updated: 2023/05/17 20:33:40 by daroldan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t h, size_t len)
{
	void	*ptr;

	ptr = malloc (h * len);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, (h * len));
	return (ptr);
}
