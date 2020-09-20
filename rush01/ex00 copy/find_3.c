/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruhl <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/20 12:42:19 by mruhl             #+#    #+#             */
/*   Updated: 2020/09/20 12:42:41 by mruhl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// trouver les 3
// sur les colonnes
char	**ft_find_col_3(char **board)
{
	while (col < 5)
	{
		if (board[1][col] == '4' && board[5][col] == 2)
		{
			board[4][col] = '3';
		}
		if (board[1][col] == '4' && board[5][col] == 3)
		{
			board[3][col] = '3';
		}
	}
	while (col < 5)
	{
		if (board[4][col] == '4' && board[0][col] == 2)
		{
			board[1][col] = '3';
		}
		if (board[4][col] == '4' && board[0][col] == 3)
		{
			board[2][col] = '3';
		}
	}
}
// sur les lignes
char	**ft_find_row_3(char **board)
{
	while (row < 5)
	{
		if (board[row][1] == '4' && board[row][5] == 2)
		{
			board[row][4] = '3';
		}
		if (board[row][1] == '4' && board[row][5] == 3)
		{
			board[row][3] = '3';
		}
	}
	while (row < 5)
	{
		if (board[row][4] == '4' && board[row][0] == 2)
		{
			board[row][1] = '3';
		}
		if (board[row][4] == '4' && board[row][0] == 3)
		{
			board[row][2] = '3';
		}
	}
}
