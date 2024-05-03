/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daroldan < daroldan@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 19:24:29 by daroldan          #+#    #+#             */
/*   Updated: 2024/05/02 00:22:44 by daroldan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putstr(char *s)
{
	unsigned int	i;
	int				cnt;

	i = 0;
	cnt = 0;
	while (i < ft_strlen(s))
	{
		cnt += write (1, &s[i], 1);
		i++;
	}
	return (cnt);
}
