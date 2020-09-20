/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_premiers_1_4.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruhl <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/20 11:59:06 by mruhl             #+#    #+#             */
/*   Updated: 2020/09/20 12:00:42 by mruhl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


char	**find_ready_to_be_filled_cells(char **board)
int row;
int col;

row = 0;
col = 1;
	while (col < 5)
	{
		if (board[row][col] == 4)
		{
			board[row + 1][col] = 1;
			board[row + 2][col] = 2;
			board[row + 3][col] = 3;
			board[row + 4][col] = 4;
		}
		if (board[row][col] == 1)
		{
			board[row++][col] = 4;
		}
		col++;
	}
row = 5;
	while (col < 5)
	{
		if (board[row][col] == 4)
		{
			board[row - 1][col] = 4;
			board[row - 2][col] = 3;
			board[row - 3][col] = 2;
			board[row - 4][col] = 1;
		}
		if (board[row][col] == 1)
		{
			board[row--][col] = 4
		}
		col++;
	}
// filling the lines
int row;
int col;

row = 1;
col = 5;
	while (row < 5)
	{
		if (board[row][col] == 4)
		{
			board[row][col - 1] = 1;
			board[row][col - 2] = 2;
			board[row][col - 3] = 3;
			board[row][col - 4] = 4;
		}
		if (board[row][col] == 1)
		{
			board[row][col--] = 4;
		}
		row++;
	}
row = 1;
	while (row < 5)
	{
		if (board[row][col] == 4)
		{
			board[row][col + 1] = 1;
			board[row][col + 2] = 2;
			board[row][col + 3] = 3;
			board[row][col + 4] = 4;
		}
		if (board[row][col] == 1)
		{
			board[row][col++] = 4;
		}
		row++;
	}
