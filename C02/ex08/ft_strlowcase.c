/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruhl <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/23 19:25:33 by mruhl             #+#    #+#             */
/*   Updated: 2020/09/23 19:46:21 by mruhl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	char *tab;

	tab = str;
	while (*tab != '\0')
	{
		if (*tab >= 65 && *tab <= 90)
			*tab += 32;
		tab++;
	}
	return (str);
}

int		main(void)
{
	char a[5] = {'a', 'T', 'J', 'h', 'b'};
	ft_strlowcase(a);
	printf("%s", a);
	return (0);
}
