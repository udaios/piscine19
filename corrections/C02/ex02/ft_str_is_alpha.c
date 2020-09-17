/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkalinic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/14 16:19:14 by kkalinic          #+#    #+#             */
/*   Updated: 2020/09/14 16:26:50 by kkalinic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int			ft_str_is_alpha(char *str)
{
	int i;

	i = -1;
	while (str[++i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
		{
			;
		}
		else if (str[i] >= 97 && str[i] <= 122)
		{
			;
		}
		else
			return (0);
	}
	return (1);
}
