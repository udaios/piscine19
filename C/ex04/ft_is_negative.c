/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruhl <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/13 18:47:57 by mruhl             #+#    #+#             */
/*   Updated: 2020/09/13 19:17:53 by mruhl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char a;
	if (n <= 0)
		a = 'N';
	else
		a = 'P';
	write(1, 'a', 1);
}

int	main(void)
{
	ft_is_negative(1);
	return (0);
}