/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruhl <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/24 19:09:59 by mruhl             #+#    #+#             */
/*   Updated: 2020/09/25 17:18:09 by mruhl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (str[i] != to_find[j])
		i++;
	while (to_find[j] != '\0')
	{
		while (str[i] == to_find[j])
		{
			
		}
	}
	
	return ();
}

int		main(void)
{
	ft_strstr();
	return (0);
}
