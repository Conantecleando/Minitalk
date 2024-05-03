/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daroldan < daroldan@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 20:16:51 by daroldan          #+#    #+#             */
/*   Updated: 2023/06/26 19:57:42 by daroldan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *chain, int c)
{
	int	j;

	j = ft_strlen(chain);
	while (j >= 0)
	{
		if (chain[j] == (char)c)
			return ((char *) chain + j);
		j--;
	}
	return (NULL);
}
