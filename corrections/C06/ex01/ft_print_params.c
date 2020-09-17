/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agraton <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/14 09:47:35 by agraton           #+#    #+#             */
/*   Updated: 2020/09/14 09:53:29 by agraton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		ft_putstr(char *c)
{
	while (*c)
		write(1, c++, 1);
	write(1, "\n", 1);
}

int			main(int argc, char **argv)
{
	int		i;

	i = 0;
	while (++i < argc)
		ft_putstr(argv[i]);
	return (0);
}
