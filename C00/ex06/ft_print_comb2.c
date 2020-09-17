/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruhl <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/16 13:11:28 by mruhl             #+#    #+#             */
/*   Updated: 2020/09/17 18:56:31 by mruhl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_display(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int a;
	int b;

	a = 0;
	b = 1;
	while (a <= 98)
	{
		while (b < 100)
		{
			ft_display(a / 10 + '0');
			ft_display(a % 10 + '0');
			ft_display(' ');
			ft_display(b / 10 + '0');
			ft_display(b % 10 + '0');
			if (a < 98)
				write(1, ", ", 2);
			b++;
		}
		a++;
		b = a + 1;
	}
}

int		main(void)
{
	ft_print_comb2();
	return (0);
}
