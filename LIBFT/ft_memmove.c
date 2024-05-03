/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daroldan < daroldan@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 22:01:17 by daroldan          #+#    #+#             */
/*   Updated: 2023/06/26 19:56:45 by daroldan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	size_t		i;
	char		*p;
	const char	*r;

	i = 0;
	p = (char *) dest;
	r = (char *) src;
	if (!p && !r)
		return (0);
	if (dest > src)
	{
		while (len-- > 0)
			p[len] = r[len];
	}
	else
	{
		while (i < len)
		{
			p[i] = r[i];
			i++;
		}
	}
	return (dest);
}
