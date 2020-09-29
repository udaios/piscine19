/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruhl <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/29 11:12:49 by mruhl             #+#    #+#             */
/*   Updated: 2020/09/30 00:06:16 by mruhl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int		ft_iswhitespace(char *str, int i)
{
	while (str[i] == ' ' || (str[i] <= 13 && str[i] >= 9))
		i++;
	return (i);
}

int		ft_atoi(char *str)
{
	int nb;
	int i;
	int	c;
	int sign;

	c = 0;
	i = 0;
	nb = 1;
	ft_iswhitespace(str, i);
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			c++;
		i++;
	}
	if (c % 2 != 0)
		sign = -1;
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb = (nb * 10) + (*str - '0');
		i++;
	}
	nb *= sign;
	printf("%d", nb);
	return (nb);
}

int		main(void)
{
	char *str = "  	+--+++-12255kh46";

	ft_atoi(str);
	return (0);
}
