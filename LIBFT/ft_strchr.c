/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daroldan < daroldan@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 00:06:44 by daroldan          #+#    #+#             */
/*   Updated: 2023/06/26 19:57:17 by daroldan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *chain, int chr)
{
	int	j;

	j = 0;
	if (chain[j] == 0 && chr == 0)
		return ((char *)chain);
	while (chain[j] != '\0')
	{
		if (chain[j] == (char)chr)
			return ((char *) &chain[j]);
		j++;
		if (chain[j] == '\0')
		{
			if ((char)chr == '\0')
				return ((char *) &chain[j]);
			else
				return (0);
		}
	}
	return (0);
}
