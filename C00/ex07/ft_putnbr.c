/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruhl <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/16 14:42:03 by mruhl             #+#    #+#             */
/*   Updated: 2020/09/17 15:00:17 by mruhl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a)
{
	write(1, &a, 1);
}

void	ft_putnbr(int nb)
{
	if (nb >= 0)
	{
		if (nb >= 9)
		{
			ft_putnbr(nb / 10);
			nb = nb % 10;
		}
		ft_putchar(nb + '0');
	}
	else
	{
		nb = nb * -1;
		ft_putchar('-');
		if (nb >= 9)
		{
			ft_putnbr(nb / 10);
			nb = nb % 10;
		}
		ft_putchar(nb + '0');
	}
}
