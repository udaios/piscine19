/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkalinic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/14 19:37:51 by kkalinic          #+#    #+#             */
/*   Updated: 2020/09/15 09:17:02 by kkalinic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	ft_strupcase(char c)
{
	int i;

	i = 0;
	if (c >= 'a' && c <= 'z')
	{
		c = c - 32;
	}
	return (c);
}

char	ft_strlowcase(char c)
{
	int i;

	i = 0;
	if (c >= 'A' && c <= 'Z')
	{
		c = c + 32;
	}
	return (c);
}

char	ft_if_printable(char *word)
{
	int i;

	i = 0;
	if ((word[i] >= '0' && word[i] <= '9') ||
		(word[i] >= 'a' && word[i] <= 'z') ||
		(word[i] >= 'A' && word[i] <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

char	*ft_strcapitalize(char *str)
{
	unsigned int	i;
	int				bol;

	i = 0;
	bol = 0;
	while (str[i] != '\0')
	{
		while (ft_if_printable(&str[i]) == 1)
		{
			if (bol == 0)
			{
				str[i] = ft_strupcase(str[i]);
				bol = 1;
			}
			else
				str[i] = ft_strlowcase(str[i]);
			i++;
		}
		if (ft_if_printable(&str[i]) == 0)
		{
			bol = 0;
		}
		i++;
	}
	return (str);
}
