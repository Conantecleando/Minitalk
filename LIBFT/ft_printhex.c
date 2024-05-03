/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daroldan < daroldan@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 22:35:45 by daroldan          #+#    #+#             */
/*   Updated: 2024/05/01 23:36:56 by daroldan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_printpointer(unsigned long long number)
{
	int	cnt;

	cnt = write (1, "0x", 2);
	cnt += ft_pointer (number);
	return (cnt);
}

int	ft_pointer(unsigned long long number)
{
	int	cnt;

	cnt = 0;
	if (number >= 16)
	{
		cnt += ft_pointer(number / 16);
		cnt += ft_pointer(number % 16);
	}
	else if (number <= 9)
		cnt += ft_printchar (number + '0');
	else if (number < 16)
		cnt += ft_printchar ((number -10) + 'a');
	return (cnt);
}

int	ft_print_hexmin(unsigned int number)
{
	int	cnt;

	cnt = 0;
	if (number >= 16)
	{
		cnt += ft_print_hexmin(number / 16);
		cnt += ft_print_hexmin(number % 16);
	}
	else if (number <= 9)
		cnt += ft_printchar (number + '0');
	else if (number < 16)
		cnt += ft_printchar ((number -10) + 'a');
	return (cnt);
}

int	ft_print_hexma(unsigned int number)
{
	int	cnt;

	cnt = 0;
	if (number >= 16)
	{
		cnt += ft_print_hexma(number / 16);
		cnt += ft_print_hexma(number % 16);
	}
	else if (number <= 9)
		cnt += ft_printchar (number + '0');
	else if (number < 16)
		cnt += ft_printchar ((number -10) + 'A');
	return (cnt);
}
