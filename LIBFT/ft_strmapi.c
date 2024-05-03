/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daroldan < daroldan@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 13:49:20 by daroldan          #+#    #+#             */
/*   Updated: 2023/06/04 15:09:48 by daroldan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*z;

	if (!s || !f)
		return (0);
	i = 0;
	z = malloc(sizeof (char) * (ft_strlen(s) + 1));
	if (!z)
		return (NULL);
	while (i < ft_strlen(s))
	{
		z[i] = f(i, s[i]);
		i++;
	}
	z [i] = '\0';
	return (z);
}
