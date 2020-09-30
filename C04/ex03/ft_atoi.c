/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruhl <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/29 11:12:49 by mruhl             #+#    #+#             */
/*   Updated: 2020/09/30 23:36:58 by mruhl            ###   ########.fr       */
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
	int	c;
	int sign;

	c = 0;
	nb = 0;
	str = ft_iswhitespace(str);
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			c++;
		str++;
	}
	if (c % 2 != 0)
		sign = -1;
	else if (c % 2 == 0)
		sign = 1;
	while (*str >= '0' && *str <= '9')
	{
		nb = (nb * 10) + (*str - '0');
		str++;
	}
	nb = nb * sign;
	return (nb);
}

int		main(void)
{
	char *str;

	str = " ---+--+1234ab567";
	printf("%d\n", ft_atoi(str));
}
