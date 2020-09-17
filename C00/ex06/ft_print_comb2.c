/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruhl <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/16 13:11:28 by mruhl             #+#    #+#             */
/*   Updated: 2020/09/17 15:09:49 by mruhl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_display(char a, char b, char c, char d)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, " ", 1);
	write(1, &c, 1);
	write(1, &d, 1);
	write(1, ",", 1);
	write(1, " ", 1);
}

void	ft_print_comb2(void)
{
	int a;
	int b;
	
	a = 0;
	b = 1;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			if (a >= 10 && b >= 10)
			{
				ft_display(a / 10 + '0', a % 10, b / 10 + '0', b % 10);
			}
			else if (a < 10)
			{
				ft_display('0', a % 10, b / 10 + '0', b % 10);
			}
			else if (b < 10)
			{
				ft_display(a /10 + '0', a % 10, '0', b % 10);
			}
			else
			{
				ft_display('0', a % 10, '0', b % 10);
			}
			b++;
		}
		a++;
	}
}

int		main(void)
{
	ft_print_comb2();
	return (0);
}
