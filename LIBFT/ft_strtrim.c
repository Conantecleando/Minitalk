/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daroldan < daroldan@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 01:54:39 by daroldan          #+#    #+#             */
/*   Updated: 2023/05/21 15:22:48 by daroldan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*r;
	size_t	j;
	size_t	h;

	if (!s1 || !set)
		return (0);
	if (!*s1)
		return (ft_calloc(1, 1));
	j = 0;
	h = ft_strlen(s1) + 1;
	while (ft_strchr(set, s1[j]) && s1[j])
		j++;
	while (ft_strrchr(set, s1[h - 1]) && (j < (h - 1)))
		h--;
	r = ft_substr (s1, j, h - j);
	if (!r)
		return (0);
	return (r);
}
