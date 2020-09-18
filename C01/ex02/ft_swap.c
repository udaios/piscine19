/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruhl <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/18 17:52:03 by mruhl             #+#    #+#             */
/*   Updated: 2020/09/18 21:04:38 by mruhl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
int *temp;
int nbr1;
int nbr2;
nbr1 = 5;
nbr2 = 6
&nbr1 = a;
&nbr2 = b;

printf("%d", *a);
printf("%d", *b);

temp = a;
a = b;
b = temp;

printf("%d", *a);
printf("%d", *b);
}

int		main(void)
{
int a;
int b;
	ft_swap();
	return (0);
}
