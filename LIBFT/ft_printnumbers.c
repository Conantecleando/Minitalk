/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnumbers.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daroldan < daroldan@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 00:57:20 by daroldan          #+#    #+#             */
/*   Updated: 2024/05/01 23:37:01 by daroldan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ftlen_num(unsigned int n)
{
	int	len;

	len = 0;
	while (n != 0)
	{
		len++;
		n = n / 10;
	}
	return (len);
}

char	*ft_uitoa(unsigned int n)
{
	int		cnt;
	char	*s;

	cnt = ftlen_num(n);
	s = (char *) malloc(sizeof (char) * (cnt +1));
	if (!n)
	{
		free (s);
		return (0);
	}
	s[cnt] = '\0';
	while (n != 0)
	{
		s[cnt - 1] = n % 10 + 48;
		n = n / 10;
		cnt--;
	}
	return (s);
}

int	ft_printdecimal(int n)
{
	int	cnt;

	cnt = 0;
	if (n == -2147483648)
	{
		cnt += ft_putstr("-2147483648");
		return (cnt);
	}
	while (n < 0)
	{
		cnt += ft_printchar ('-');
		n = -n;
	}
	if (n <= 9)
	{
		cnt += ft_printchar (n + '0');
	}
	else if (n > 9)
	{
		cnt += ft_printdecimal(n / 10);
		cnt += ft_printdecimal(n % 10);
	}
	return (cnt);
}

int	ft_printint( unsigned int n)
{
	int		cnt;
	char	*s;

	cnt = 0;
	if (n == 0)
		cnt += ft_printchar('0');
	else
	{
		s = ft_uitoa(n);
		cnt += ft_printstring (s);
		free (s);
	}
	return (cnt);
}
