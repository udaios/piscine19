/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruhl <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/16 13:11:28 by mruhl             #+#    #+#             */
/*   Updated: 2020/09/16 22:46:05 by mruhl            ###   ########.fr       */
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
	char m;
	char n;
	char o;
	char p;
	
	a = 0;
	b = 1;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			if (a >= 10 && b >= 10)
			{
			m = a / 10 + '0';
			n = a % 10;
			o = b / 10 + '0';
			p = b % 10;
			ft_display(m, n, o, p);
			}
			else if (a < 10)
			{
			m = '0';
			n = a % 10;
			o = b / 10 + '0';
			p = b % 10;
			ft_display(m, n, o, p);
			}
			else if (b < 10)
			{
			m = a / 10 + '0';
			n = a % 10;
			o = '0';
			p = b % 10;
			ft_display(m, n, o, p);
			}
			else
			{
			m = '0';
			n = a % 10;
			o = '0';
			p = b % 10;
			ft_display(m, n, o, p);
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
