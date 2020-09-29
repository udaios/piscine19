/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruhl <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/29 11:12:49 by mruhl             #+#    #+#             */
/*   Updated: 2020/09/29 23:56:57 by mruhl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_iswhitespace(char *str)
{
	while (*str == ' ' || (*str <= 13 && *str >= 9))
		str++;
	return (str);
}

int		ft_atoi(char *str)
{
	int nb;
	int i;
	int	c;
	int sign;

	c = 0;
	nb = 1;
	*ft_iswhitespace(str);
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			c++;
		str++;
	}
	if (c % 2 != 0)
		sign = -1;
	while (*str >= '0' && *str <= '9')
	{
		nb = (nb * 10) + (*str - '0');
		str++;
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
