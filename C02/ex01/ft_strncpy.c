/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruhl <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/23 17:48:02 by mruhl             #+#    #+#             */
/*   Updated: 2020/09/25 21:01:14 by mruhl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int i;
	printf("%s", dest);
	printf("%s", src);

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while ( i < n)
	{
		dest[i] = '\0';
		i++;
	}
	printf("%s", dest);
	printf("%s", src);
	return (dest);
}

int		main(void)
{
	char a[] = "hi";
	char b[] = "salut";

	ft_strncpy(b, a, 4);
	return (0);
}
