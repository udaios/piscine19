/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruhl <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/21 19:34:28 by mruhl             #+#    #+#             */
/*   Updated: 2020/09/23 11:10:00 by mruhl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int i;
	int j;
	int temp;

	i = 0;
	while (i < size)
	{
		temp = tab[size];
		tab[size] = tab[i];
		tab[i] = temp;
		i++;
		size--;
	}
	i = 0;
	while (i < 9)
	{
		printf("%d", tab[i]);
		i++;
	}
}

int		main(void)
{
	int tab[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

	ft_rev_int_tab(tab, 10);
	return (0);
}
