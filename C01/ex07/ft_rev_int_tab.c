/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruhl <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/21 19:34:28 by mruhl             #+#    #+#             */
/*   Updated: 2020/09/24 14:45:15 by mruhl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int i;
	int j;
	int temp;

	j = size - 1;
	i = 0;
	while (i < j)
	{
		temp = tab[j];
		tab[j] = tab[i];
		tab[i] = temp;
		i++;
		j--;
	}
	i = 0;
	while (i < size)
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
