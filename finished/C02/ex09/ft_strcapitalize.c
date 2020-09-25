/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruhl <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/23 19:55:17 by mruhl             #+#    #+#             */
/*   Updated: 2020/09/24 15:06:35 by mruhl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	char *p;
	int i;

	i= 0;
	p = str;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (str[i - 1] < 'a' && str[i - 1] > 'z')
			{
				if (!(str[i - 1] >= '0' && str[i - 1] <= '9'))
					str[i] -= 32;
			}
		}
		i++;
	}
	return (str);
}

int		main(void)
{
	char a[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";

	ft_strcapitalize(a);
	printf("%s", a);
	return (0);
}
