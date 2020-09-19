#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 2);
}

void	print_board(char **board)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (i < 6)
	{
		while (j < 6)
		{
			printf("%s", board[i][j]);
			j++;
		}
		i++;
	}
}

int main(int argc, char **argv)
{
	// on instancie le tableau a deux dimensions
	char **board;

	// on alloue la memoire necessaire pour les 6 lignes
	if (!(board = malloc(4 * sizeof(char*))))
			return (NULL);
	int i;

	i = 0;
	// on parcourt les 6 lignes
	while (i < 6)
	{
		// on alloue la memoire necessaire pour les 6 colonnes
		if (!(board[i] = malloc(4 * sizeof(char))))
				return (NULL);
		i++;
	}
	// exemple pour ajouter une valeur dans le tableau
	// board[0][1] = '4';
	// pour afficher :
	// ft_putchar(board[0][1] + '4');

	print_board(board);
	free(board);
	return (0);
}

char	**find_ready_to_be_filled_cells(char **board, char **argv)
{
	// on cherche tous les 4 et les 1
	int i;
	int j;

	i = 0;
	j = 0;
	while (argv[1][j] != '\0')
	{
		if (argv[1][j] == 4 && (i >= 0 && i <= 6))
		{
			board[0][j] = 1;
			board[1][j] = 2;
			board[2][j] = 3;
			board[3][j] = 4;
		}
		if (argv[1][j] == 4 && (i >= 8 && i <= 14))
		{
			board[i][0] = 4;
			board[1][1] = 3;
			board[2][2] = 2;
			board[3][3] = 1;
		}
		if (argv[1][j] == 4 && (i >= 16 && i <= 22))
		{
			board[0][j] = 4;
			board[1][j] = 3;
			board[2][j] = 2;
			board[3][j] = 1;
		}
		if (argv[1][j] == 4 && (i >= 24 && i <= 30))
		{
			board[0][j] = 1;
			board[1][j] = 2;
			board[2][j] = 3;
			board[3][j] = 4;
		}
		i += 2;
	}
}

while ()
