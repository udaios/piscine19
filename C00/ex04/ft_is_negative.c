/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruhl <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/13 18:47:57 by mruhl             #+#    #+#             */
/*   Updated: 2020/09/17 14:53:59 by mruhl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char s;

	if (n < 0)
	{
		s = 'N';
		write(1, &s, 1);
	}
	else
	{
		s = 'P';
		write(1, &s, 1);
	}
}
