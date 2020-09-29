/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruhl <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/23 21:54:55 by mruhl             #+#    #+#             */
/*   Updated: 2020/09/29 13:00:33 by mruhl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}
	
int		main(void)
{
	char *str1;
	char *str2;

	str1 = "Hell";
	str2 = "Hell";
	printf("c  : %d\n", strcmp(str1, str2));
	printf("ft : %d\n", ft_strcmp(str1, str2));
}
