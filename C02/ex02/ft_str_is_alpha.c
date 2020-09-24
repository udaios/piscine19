/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruhl <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/23 14:01:23 by mruhl             #+#    #+#             */
/*   Updated: 2020/09/23 14:23:38 by mruhl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_str_is_alpha(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 65 && str[i] <= 90) || (str[i] >= 97 && str[i] <= 122))
			return (1);
		i++;
	}
	return (0);
}

int		main(void)
{
	char a[] = aHtyFoPu;
	char a1[] = 198037;
	char b[];
	ft_str_is_alpha(a);
	printf("%d", return)
	return(0);
}
