/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daroldan < daroldan@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 19:40:58 by daroldan          #+#    #+#             */
/*   Updated: 2024/05/01 23:36:50 by daroldan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_variable(char const y, va_list arg)
{
	int		cnt;

	cnt = 0;
	if (y == 'c')
		cnt += ft_printchar(va_arg(arg, int));
	else if (y == 's')
		cnt += ft_printstring(va_arg(arg, char *));
	else if (y == 'p')
		cnt += ft_printpointer(va_arg(arg, unsigned long));
	else if (y == 'd' || y == 'i' )
		cnt += ft_printdecimal(va_arg(arg, int));
	else if (y == 'u')
		cnt += ft_printint(va_arg(arg, unsigned int));
	else if (y == 'x')
		cnt += ft_print_hexmin(va_arg(arg, int));
	else if (y == 'X')
		cnt += ft_print_hexma(va_arg(arg, int));
	else if (y == '%')
		cnt += ft_printchar('%');
	else
		return (-1);
	return (cnt);
}

int	ft_printf(char const *y, ...)
{
	va_list				arg;
	int					cnt;
	int					i;
	unsigned int		len;

	va_start(arg, y);
	cnt = 0;
	i = 0;
	len = ft_strlen(y);
	while (y[i] && i < (int)len)
	{
		if (y[i] == '%')
			cnt += ft_variable (y[++i], arg);
		else
		{
			cnt += ft_printchar (y[i]);
		}
		if (cnt < 0)
			return (-1);
		i++;
	}
	va_end(arg);
	return (cnt);
}
