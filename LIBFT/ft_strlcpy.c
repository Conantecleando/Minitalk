/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daroldan < daroldan@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 02:07:52 by daroldan          #+#    #+#             */
/*   Updated: 2024/04/18 01:59:53 by daroldan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *orig, size_t len)
{
	size_t	i;

	i = -1;
	while (++i < len && orig[i] != '\0')
		dest[i] = orig[i];
	dest[i] = '\0';
	return (ft_strlen(orig));
}
