/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruhl <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/24 13:54:09 by mruhl             #+#    #+#             */
/*   Updated: 2020/09/24 20:48:38 by mruhl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *nb1, int *nb2)
{
	int temp;

	temp = *nb1;
	*nb1 = *nb2;
	*nb2 = temp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int i;

	i = 0;
	while (i < size)
	{
		if ((tab[i] - tab[i + 1]) > 0)
		{
			ft_swap(&tab[i], &tab[i + 1]);
			i = -1;
		}
		i++;
	}
}

int		main(void)
{
	int a[10] = {7, 1, 12, 6, 9, 0, -4, 3, 5, 57};
	int i;

	i = 0;
	while (i < 10)
	{
		printf("%d,", a[i]);
		i++;
	}
	ft_sort_int_tab(a, 10);
	i = 0;
	while (i < 10)
	{
		printf("%d,", a[i]);
		i++;
	}
	return (0);
}
