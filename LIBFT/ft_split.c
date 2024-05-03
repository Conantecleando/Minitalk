/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daroldan < daroldan@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 00:18:20 by daroldan          #+#    #+#             */
/*   Updated: 2024/04/26 12:54:59 by daroldan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_wordcount(char const *f, char s)
{
	int	cont;
	int	res;

	cont = 0;
	res = 0;
	while (f[cont])
	{
		if ((f[cont] != s && f[cont + 1] == s)
			|| (f[cont] != s && f[cont + 1] == 0))
		{
			res++;
		}
		cont++;
	}
	return (res);
}

void	free_ptr(char **ptr, int t)
{
	t = 0;
	while (ptr[t])
		free(ptr[t++]);
	free(ptr);
}

static char	**ft_subsplit(char **ptr, char const *s, char c, int t)
{
	unsigned int	cont;
	unsigned int	cont2;

	cont = 0;
	while (s[cont] != '\0')
	{
		while (s[cont] == c && s[cont] != '\0')
			cont++;
		if (s[cont] == 0)
			break ;
		cont2 = cont;
		while (s[cont] != c && s[cont] != 0)
			cont++;
		ptr[t] = ft_substr(s, cont2, (cont - cont2));
		if (!ptr[t])
		{
			free_ptr(ptr, t);
			return (NULL);
		}
		t++;
	}
	ptr[t] = NULL;
	return (ptr);
}

char	**ft_split(char const *s, char c)

{
	int				t;
	char			**ptr;

	t = ft_wordcount(s, c);
	ptr = malloc(sizeof(char *) * (t + 1));
	if (!ptr)
		return (NULL);
	t = 0;
	ptr = ft_subsplit(ptr, s, c, t);
	return (ptr);
}
