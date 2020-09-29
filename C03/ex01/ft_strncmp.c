/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruhl <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/24 15:14:13 by mruhl             #+#    #+#             */
/*   Updated: 2020/09/29 22:11:19 by mruhl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (s1[i] != '\0' && s1[i] == s2[i] && i <= n)
		i++;
	return (s1[i] - s2[i]);
}

int		main(void)
{
	char *str1;
	char *str2;

	str1 = "slt";
	str2 = "hi";
	//str1[0] = '\200';
	//str2[0] = '\0';
	//str1[1] = '\0';
	//str2[1] = '\0';
	printf("c  : %d\n", strncmp(str1, str2, 5));
	printf("ft : %d\n", ft_strncmp(str1, str2, 5));
}
