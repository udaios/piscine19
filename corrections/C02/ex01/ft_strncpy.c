/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkalinic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/13 17:17:16 by kkalinic          #+#    #+#             */
/*   Updated: 2020/09/17 16:37:29 by mruhl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (src[j])
		j++;
	while (i < n)
	{
		if (i > j)
			dest[i] = '\0';
		else
		{
			if (src[i])
				dest[i] = src[i];
			else
				dest[i] = '\0';
		}
		i++;
	}
	return (dest);
}
