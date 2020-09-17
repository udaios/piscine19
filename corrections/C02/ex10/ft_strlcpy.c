/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkalinic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/15 09:20:44 by kkalinic          #+#    #+#             */
/*   Updated: 2020/09/16 15:54:13 by kkalinic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned int		ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	if (size > 0)
	{
		while (src[i])
		{
			if (i < size - 1)
				dest[i] = src[i];
			else
				break ;
			i++;
		}
	}
	dest[i] = '\0';
	i = 0;
	while (src[i])
		i++;
	return (i);
}
