/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daroldan < daroldan@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 19:29:55 by daroldan          #+#    #+#             */
/*   Updated: 2024/05/03 01:52:23 by daroldan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <signal.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdbool.h>
#include "../LIBFT/libft.h"

void	ft_handler(int signal)
{
	static int	bit;
	static int	z;

	if (signal == SIGUSR1)
		z |= (0x01 << bit);
	bit++;
	if (bit == 8)
	{
		ft_printf("%c", z);
		bit = 0;
		z = 0;
	}
}

int	main(int argc, char **argv)
{
	pid_t	signum;

	(void) *argv;
	signum = getpid();
	ft_printf("%d Si inicializamos aqui", signum);
	ft_printf("%s", "Waiting menssage... \n");
	while (argc == 1)
	{
		signal (SIGUSR1, ft_handler);
		signal (SIGUSR2, ft_handler);
		usleep(1000);
	}
}
