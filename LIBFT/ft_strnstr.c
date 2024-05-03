/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daroldan < daroldan@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 00:20:52 by daroldan          #+#    #+#             */
/*   Updated: 2024/04/07 13:14:23 by daroldan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *c, const char *s, size_t len)
{
	size_t	pos;
	size_t	pos2;

	pos = 0;
	if (s[pos] == '\0')
		return ((char *) c);
	while (c[pos] && pos < len)
	{
		pos2 = 0;
		while (c[pos + pos2] == s[pos2] && pos + pos2 < len)
		{
			if (!s[pos2 + 1])
				return ((char *)c + pos);
			pos2++;
		}
		pos++;
	}
	return (0);
}
