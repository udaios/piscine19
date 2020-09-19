/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush-01.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgolinva <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/19 13:16:27 by tgolinva          #+#    #+#             */
/*   Updated: 2020/09/19 14:30:12 by tgolinva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	**draw_board(char **args)
{
	char  board[6][6] = {
		{" ", args[1][0], args[1][2] ,args[1][4], args[1][6]," "},
		{args[1][30], 0, 0, 0, 0, args[1][8]},
		{args[1][28], 0, 0, 0, 0, args[1][10]},
		{args[1][26], 0, 0, 0, 0, args[1][12]},
		{args[1][24], 0, 0, 0, 0, args[1][14]},
		{" ", args[1][22], args[1][20], args[1][18], args[1][16]," "}
	};
	return (board);
}

void	print_board(**board)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while(i < 6)
	{	
		while(j < 6)
		{
			printf("%c", board[i][j]);
			j++;
		}
		i++;
	}	

}

int	main(int argc, char **argv)
{
	char **board = draw_board(argv);
	print_board(board);	
	return (0);
	

}
