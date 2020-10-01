/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruhl <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/01 17:28:49 by mruhl             #+#    #+#             */
/*   Updated: 2020/10/01 18:01:32 by mruhl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_is_prime(int nb)
{
	int i;
	int res;

	i = 5;
	if (nb <= 1)
		return (0);
	if (nb == 2 || nb == 3)
		return (1);
	if ((nb % 2) == 0 || (nb % 3) == 0)
		return (0);
	while (i < nb)
	{
		if (nb % i == 0)
			return (0);
		else if (nb % i != 0)
			i += 2;
	}
	return (1);
}

int	main(void)
{
	int	number;
	int	result;
	int	count;

	number = 0;
	count = 0;
	while (number <= 50000)
	{
		result = ft_is_prime(number);
		printf("is_prime(%d) = %d\n", number, result);
		number++;
		if (result)
			count++;
	}
	printf("first 50'000 number, %d prime\n", count);
	return (0);
}
