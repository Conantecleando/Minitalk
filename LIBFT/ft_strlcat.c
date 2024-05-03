/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daroldan < daroldan@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 21:57:14 by daroldan          #+#    #+#             */
/*   Updated: 2023/05/13 23:20:56 by daroldan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *orig, size_t len)
{
	size_t	i;
	size_t	j;

	j = ft_strlen(dest);
	if (len <= j)
		return (ft_strlen(orig) + len);
	i = 0;
	while (orig[i] != '\0' && j < len -1)
	{
		dest[j] = orig[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (ft_strlen(&orig[i]) + ft_strlen(dest));
}
