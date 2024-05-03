/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daroldan < daroldan@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 23:22:35 by daroldan          #+#    #+#             */
/*   Updated: 2023/05/18 01:50:53 by daroldan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*p;
	int		cont;
	int		cont2;

	cont = 0;
	cont2 = 0;
	p = (char *)malloc (sizeof(char) * ((ft_strlen(s1)
					+ ft_strlen(s2)) + 1));
	if (!p)
		return (0);
	while (s1 != 0 && cont < (int)ft_strlen(s1))
	{
		p[cont] = s1[cont];
		cont++;
	}
	while (s2 != 0 && cont2 < (int)ft_strlen(s2))
	{
		p[cont + cont2] = s2[cont2];
		cont2++;
	}
	p[cont + cont2] = '\0';
	return (p);
}
