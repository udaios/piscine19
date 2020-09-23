/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruhl <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/21 17:00:21 by mruhl             #+#    #+#             */
/*   Updated: 2020/09/21 18:20:22 by mruhl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int t;

	printf("%d", *a);
	printf("%d", *b);
	t = *a;
	*a = *a / *b;
	*b = t % *b;
	printf("%d", *a);
	printf("%d", *b);
}

int		main(void)
{
	int a;
	int b;

	a = 5;
	b = 2;
	ft_ultimate_div_mod(&a, &b);
	return (0);
}
