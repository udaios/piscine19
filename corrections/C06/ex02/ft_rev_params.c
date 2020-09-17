/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agraton <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/14 09:54:13 by agraton           #+#    #+#             */
/*   Updated: 2020/09/14 09:56:56 by agraton          ###   ########.fr       */
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
	while (--argc > 0)
		ft_putstr(argv[argc]);
	return (0);
}
