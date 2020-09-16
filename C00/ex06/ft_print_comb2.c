/* **************************************************************************** */
/*                                                                              */
/*                                                         :::      ::::::::    */
/*    ft_print_comb2.                                    :+:      :+:    :+:    */
/*                                                     +:+ +:+         +:+      */
/*    By: mruhl <marvin@42.fr>                       +#+  +:+       +#+         */
/*                                                 +#+#+#+#+#+   +#+            */
/*    Created: 2020/09/16 12:23:55 by mruhl             #+#    #+#              */
/*   Updated: 2020/09/16 12:45:36 by mruhl            ###   ########.fr       */
/*                                                                              */
/* **************************************************************************** */

#include <unistd.h>

void	ft_display(int a, int b)
{
	if (a < 10)
	write(1, 0, 1);
	write(1, &a, 1);
	write(1, " ", 1);
	write(1, 0, 1);
	write(1, &b, 1);
}

void	ft_print_comb2(void)
{
	int a;
	int b;

	a = 0;
	b = 1;
	while (b <= 99)
	{
		while (a <= 98)
		{
			ft_display(a, b);
			a++;
		}
		ft_display(a, b);
		b++;
	}
}
