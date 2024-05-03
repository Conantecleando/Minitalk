/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printchar.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daroldan < daroldan@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 00:19:06 by daroldan          #+#    #+#             */
/*   Updated: 2024/05/01 23:36:45 by daroldan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_printchar(char c)
{
	int	cnt;

	cnt = write(1, &c, 1);
	return (cnt);
}

int	ft_printstring(char *s)
{
	int	i;

	i = 0;
	if (s == 0)
	{
		write (1, "(null)", 6);
		return (6);
	}
	else if (s < 0)
		return (0);
	while (s[i] != '\0')
	{
		write(1, &s[i], 1);
		i++;
	}
	return (i);
}
