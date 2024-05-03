/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daroldan < daroldan@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 00:08:30 by davidrol          #+#    #+#             */
/*   Updated: 2023/05/17 21:21:54 by daroldan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *source)
{
	size_t	h;
	char	*j;

	h = ft_strlen(source);
	j = malloc(h + 1);
	if (!j)
		return (NULL);
	ft_strlcpy(j, source, (h + 1));
	return (j);
}
