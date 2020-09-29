/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruhl <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/23 18:04:16 by mruhl             #+#    #+#             */
/*   Updated: 2020/09/29 20:09:46 by mruhl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>
#include <stdio.h>

int		ft_str_is_numeric(char *str)
{
	int i;

	i = -1;
	while (str[++i])
	{
		if (!(str[i] >= 48 && str[i] <= 57))
			return (0);
	}
	return (1);
}

int		main(void)
{
	char *str_valid;
	char *str_invalid;

	str_valid = "123456";
	str_invalid = "156h29";
	printf("should be 1: %d\n", ft_str_is_numeric(str_valid));
	printf("should be 0: %d\n", ft_str_is_numeric(str_invalid));
}
