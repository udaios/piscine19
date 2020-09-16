/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruhl <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/16 13:11:28 by mruhl             #+#    #+#             */
/*   Updated: 2020/09/16 13:30:03 by mruhl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_display(int a, int b)
{
	if (a >= 10 && b >= 10)
	{
	write(1, " ", 1);
	write(1, &a, 1);
	write(1, " ", 1);
	write(1, &b, 1);
	write(1, ",", 1);
	}
	else
	{
		if (a < 10)
		{
			write(1, " ", 1);
			write(1, "0", 1);
			write(1, &a, 1);
			write(1, " ", 1);
			write(1, &b, 1);
			write(1, ",", 1);
		}
		else if (b < 10)
		{
			write(1, " ", 1);
			write(1, &a, 1);
			write(1, " ", 1);
			write(1, "0", 1);
			write(1, &b, 1);
			write(1, ",", 1);
		}
		else
		{
			write(1, " ", 1);
			write(1, "0", 1);
			write(1, &a, 1);
			write(1, " ", 1);
			write(1, "0", 1);
			write(1, &b, 1);
			write(1, ",", 1);
		}
	}
}

void	ft_print_comb2(void)
{
	int nb1;
	int nb2;

	nb1 = 0;
	nb2 = 1;
	while (nb1 <= 98)
	{
		nb2 = nb1 + 1;
		while (nb2 <= 99)
		{
			ft_display(nb1, nb2);
			nb2++;
		}
		ft_display(nb1, nb2);
		nb1++;
	}
}

int		main(void)
{
	ft_print_comb2();
	return (0);
}
