/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daroldan < daroldan@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 21:09:35 by daroldan          #+#    #+#             */
/*   Updated: 2023/06/26 19:56:34 by daroldan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			cont;
	unsigned char	*p;
	unsigned char	*r;

	p = (unsigned char *)s1;
	r = (unsigned char *)s2;
	cont = -1;
	while (++cont < n)
		if (p[cont] != r[cont])
			return ((p[cont]) - (r[cont]));
	return (0);
}
