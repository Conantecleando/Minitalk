/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daroldan <daroldan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 00:25:32 by daroldan          #+#    #+#             */
/*   Updated: 2024/05/31 19:57:10 by daroldan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <signal.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdbool.h>
#include "../LIBFT/libft.h"

void	ft_msg_bit(int pid, char z)
{
	int	bit;

	bit = 0;
	while (bit < 8)
	{
		if ((z & (0x01 << bit)) != 0)
			kill(pid, SIGUSR1);
		else
			kill(pid, SIGUSR2);
		usleep(42);
		bit++;
	}
}

int	main(int argc, char **argv)
{
	pid_t	pid;
	int		i;

	i = 0;
	if (!argc)
		return (0);
	else if (argc != 3)
		ft_printf("%s write ./client <PID> <MESSAGE>/n");
	else if (argc == 3)
	{
		pid = ft_atoi(argv[1]);
		while (argv[2][i] != '\0')
		{
			ft_msg_bit(pid, argv[2][i]);
			i++;
		}
		ft_msg_bit(pid, '\n');
	}
}
