/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daroldan < daroldan@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 22:34:35 by daroldan          #+#    #+#             */
/*   Updated: 2023/05/07 19:52:22 by daroldan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	cont;

	cont = -1;
	while (++cont < n && (s1[cont] || s2[cont]))
		if (s1[cont] != s2[cont])
			return (((unsigned char)s1[cont]) - ((unsigned char)s2[cont]));
	return (0);
}
