/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daroldan < daroldan@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 20:09:35 by daroldan          #+#    #+#             */
/*   Updated: 2023/05/12 22:15:45 by daroldan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*p;
	unsigned char	*r;

	p = (unsigned char *) dest;
	r = (unsigned char *) src;
	if (!p && !r)
		return (0);
	i = 0;
	while (i < n)
	{
		p[i] = (r)[i];
		i++;
	}
	return (dest);
}
