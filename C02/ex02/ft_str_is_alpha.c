/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruhl <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/23 14:01:23 by mruhl             #+#    #+#             */
/*   Updated: 2020/09/29 19:40:30 by mruhl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdbool.h>

int		ft_str_is_alpha(char *str)
{
	int i;

	i = -1;
	while (str[++i])
	{
		if (!((str[i] >= 65 && str[i] <= 90) || (str[i] >= 97 && str[i] <= 122)))
			return (0);
	}
	return (1);
}

int		main(void)
{
	char *str_valid;
	char *str_invalid;

	str_valid = "";
	str_invalid = "Hell0";
	printf("should be 1: %d\n", ft_str_is_alpha(str_valid));
	printf("should be 0: %d\n", ft_str_is_alpha(str_invalid));
}
