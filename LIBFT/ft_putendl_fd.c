/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daroldan < daroldan@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 19:36:27 by daroldan          #+#    #+#             */
/*   Updated: 2023/06/06 19:47:19 by daroldan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	unsigned int	i;

	i = 0;
	while (i < ft_strlen(s))
	{
		write (fd, &s[i], 1);
		i++;
	}
	write (fd, "\n", 1);
}
