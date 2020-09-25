/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruhl <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/23 11:17:00 by mruhl             #+#    #+#             */
/*   Updated: 2020/09/25 20:30:18 by mruhl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
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
	printf("%s", dest);
	printf("%s", src);
	return (dest);
}

int		main(void)
{
	char a[] = "hello!";
	char b[] = "salut";

	ft_strcpy(b, a);
	return (0);
}
