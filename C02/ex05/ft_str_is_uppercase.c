/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruhl <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/23 19:02:03 by mruhl             #+#    #+#             */
/*   Updated: 2020/09/23 19:02:58 by mruhl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int		ft_str_is_uppercase(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!str[i] >= 65 && str[i] <= 90)
			return (1);
		i++;
	}
	return (0);
}
