/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daroldan < daroldan@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 20:48:18 by daroldan          #+#    #+#             */
/*   Updated: 2024/04/26 09:44:50 by daroldan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int	result;
	int	i;
	int	z;

	result = 0;
	i = 0;
	z = 1;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\r'
		|| str[i] == '\t' || str[i] == '\v' || str[i] == '\f')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			z = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = ((result * 10) + (str[i] - '0'));
		i++;
	}
	return (result * z);
}
