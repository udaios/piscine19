/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruhl <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/30 17:39:13 by mruhl             #+#    #+#             */
/*   Updated: 2020/09/30 17:55:14 by mruhl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_recursive_factorial(int nb)
{
	int res;

	res = 0;
	while (nb > 0)
	{
		res = nb * (ft_recursive_factorial(nb - 1));
	}
	printf("%d", res);
	return (res);
}

int		main(void)
{
	ft_recursive_factorial(5);
	return (0);
}
