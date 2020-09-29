/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruhl <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/23 19:55:17 by mruhl             #+#    #+#             */
/*   Updated: 2020/09/28 17:15:16 by mruhl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char	*ft_strcapitalize(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if ((!(str[i - 1] >= 'A' && str[i - 1] <= 'Z'))
					&& (!(str[i - 1] >= '0' && str[i - 1] <= '9'))
					&& (!(str[i - 1] >= 'a' && str[i - 1] <= 'z')))
				str[i] -= 32;
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
		{
			if ((str[i - 1] >= 'A' && str[i - 1] <= 'Z')
					|| (str[i - 1] >= '0' && str[i - 1] <= '9')
					|| (str[i - 1] >= 'a' && str[i - 1] <= 'z'))
				str[i] += 32;
		}
		i++;
	}
	return (str);
}

int		main(void)
{
	char a[] = "salut, commEnt tu vas ? 42mots quarante-deux; cinquante+et+un";

	ft_strcapitalize(a);
	printf("%s", a);
	return (0);
}
