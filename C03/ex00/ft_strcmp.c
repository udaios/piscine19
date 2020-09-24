/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruhl <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/23 21:54:55 by mruhl             #+#    #+#             */
/*   Updated: 2020/09/23 22:11:01 by mruhl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(char *s1, char *s2)
{
	int i;
	int res;

	res = 0;
	i = 0;
	while (i )
	{
		res = s1[i] - s2[i];
		i++;
	}
	if (res > 0)
		return (1);
	else if (res == 0)
		return (0);
	else
		return (-1);
}

int		main(void)
{
	char a1[] = "salut";
	char a2[] = "hello";

	ft_strcmp(a1, a2);
	return (0);
}
