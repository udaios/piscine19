/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agraton <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/14 09:59:22 by agraton           #+#    #+#             */
/*   Updated: 2020/09/14 10:24:54 by agraton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int			ft_strcmp(char *s1, char *s2)
{
	int		i;

	i = -1;
	while (s1[++i] || s2[++i])
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
	return (0);
}

void		ft_putstr(char *c)
{
	while (*c)
		write(1, c++, 1);
	write(1, "\n", 1);
}

int			main(int argc, char **argv)
{
	char	*(ar[argc]);
	char	*tmp;
	int		i;
	int		o;

	i = 0;
	while (++i < argc)
		ar[i] = argv[i];
	i = 0;
	while (++i < argc)
	{
		o = i;
		while (++o < argc)
			if (ft_strcmp(ar[i], ar[o]) > 0)
			{
				tmp = ar[i];
				ar[i] = ar[o];
				ar[o] = tmp;
			}
	}
	i = 0;
	while (++i < argc)
		ft_putstr(ar[i]);
	return (0);
}
