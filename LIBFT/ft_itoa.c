/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daroldan < daroldan@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 02:15:08 by daroldan          #+#    #+#             */
/*   Updated: 2023/06/27 11:47:29 by daroldan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	ft_isneg(int n)
{
	if (n < 0)
		return ('-');
	return (0);
}

size_t	ft_lenitoa(int n)
{
	int	cont;

	cont = 0;
	if (n <= 0)
		cont++;
	while (n)
	{
		n = n / 10;
		cont++;
	}
	return (cont);
}

char	*ft_itoa(int n)
{
	long	cont;
	char	*res;
	size_t	len;
	int		r;

	r = 0;
	len = ft_lenitoa(n);
	cont = (long) n;
	res = malloc(sizeof(char) * (len + 1));
	if (!res)
		return (NULL);
	if (n == 0)
		*res = '0';
	if (cont < 0)
	{
		res[0] = ft_isneg(n);
		cont = -cont;
	}
	while ((++r && cont != 0) || cont != 0)
	{
		res[--len] = (cont % 10) + '0';
		cont = cont / 10;
	}
	res[len + (r -1)] = '\0';
	return (res);
}
