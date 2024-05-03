/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daroldan < daroldan@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 21:37:39 by daroldan          #+#    #+#             */
/*   Updated: 2023/06/26 19:56:54 by daroldan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t len)
{
	size_t	p;
	char	*copy;

	p = 0;
	copy = (char *)s;
	while (len > p)
	{
		copy[p] = c;
		p++;
	}
	return (copy);
}
