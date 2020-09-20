/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   double_tab.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruhl <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/19 17:48:43 by mruhl             #+#    #+#             */
/*   Updated: 2020/09/19 19:21:03 by mruhl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int i;/*lignes*/
int j;/*colonnes*/
input_board_columns [2][4] = {
	{args[1][0], args[1][2], args[1][4], args[1][6]},
	{args[1][22], args[1][20], args[1][18], args[1][16]}
};

input_board_lines [4][2] = {
	{args[1][8], args[1][30]},
	{args[1][10], args[1][28]},
	{args[1][12], args[1][26]},
	{args[1][14], args[1][24]}
};

output_board [4][4] = {
	{0, 0, 0, 0},
	{0, 0, 0, 0},
	{0, 0, 0, 0},
	{0, 0, 0, 0}
}

//arguments 1 -> 4 (de haut en bas dans le tableau final)
void	ft_1st_sweep_columns()
{
	if (ibc[0][j] == 4)
	{
		outpout_board[0][j] = 1
		outpout_board[1][j] = 2
		outpout_board[2][j] = 3
		outpout_board[3][j] = 4
	}
	if (ibc[0][j] == 1)
	{
		outpout_board[0][j] = 4
	}

// arguments 9 -> 12 (de bas en haut)
	if (ibc[1][j] == 4)
	{
		outpout_board[0][j] = 4
		outpout_board[1][j] = 3
		outpout_board[2][j] = 2
		outpout_board[3][j] = 1
	}
	if (ibc[1][j] == 1)
	{
		outpout_board[3][j] = 4 
	}
}
// arguments 5 -> 8 (de droite a gauche)
void	ft_1st_sweep_lines()
{
	if (ibl[i][1] == 4)
	{
		outpout_board[i][0] = 4
		outpout_board[i][1] = 3
		outpout_board[i][2] = 2
		outpout_board[i][3] = 1
	}
	if (ibl[i][1] == 1)
	{
		outpout_board[i][3] = 4 
	}

// arguments 13 -> 16 (de gauche a droite)
	if(ibl[i][0] == 4)
	{
		outpout_board[i][0] = 1
		outpout_board[i][1] = 2
		outpout_board[i][2] = 3
		outpout_board[i][3] = 4
	}
	if (ibl[i][0] == 1)
	{
		outpout_board[i][0] = 4 
	}
}


// les "3"
//colonnes
void	ft_2nd_sweep_columns()
{


}
