/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruhl <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/01 18:55:37 by mruhl             #+#    #+#             */
/*   Updated: 2020/10/01 20:25:15 by mruhl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str++, 1);
	}
	write(1, "\n", 1);
}

int		main(int argc, char **argv)
{
	int i;

	i = argc;
	while (argv[i - 1] != argv[0])
	{
		if (argc > 1)
		{
			ft_putstr(argv[i - 1]);
			i--;
			argc--;
		}
	}
	return (0);
}
