#include <stdlib.h>
#include <unistd.h>

int board_size;
char **coordinate_board;

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putstr(char *str)
{
	while (*str)
	{
		ft_putchar(*str);
		str++;
	}
}

int ft_strlen(char *str)
{
	int i = 0;
	while (*str++)
		i++;
	return (i);
}

void print_board(char **coordinate_board)
{
	int i = 0;
	int j = 0;
	while (coordinate_board[i])
	{
		j = 0;
		while (coordinate_board[i][j])
		{
			ft_putchar(coordinate_board[i][j]);
			ft_putchar(' ');
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}

int is_a_piece_but_not_a_king(int y, int x)
{
	char spot;
	spot = coordinate_board[y][x];
	if (spot == 'P' || spot == 'B' || spot == 'R' || spot == 'Q')
		return (1);
	else
		return (0);
}

void pawn(int y, int x)
{
	if ((y < 0) || (y > board_size - 1) || (x < 0) || (x > board_size - 1))
		return ;
	if (!((y - 1 < 0) || (y - 1 > board_size - 1) || (x - 1 < 0) || (x - 1 > board_size - 1)))
		if (!is_a_piece_but_not_a_king(y - 1, x - 1))
				coordinate_board[y - 1][x - 1] = 'X';
	if (!((y - 1 < 0) || (y - 1 > board_size - 1) || (x + 1 < 0) || (x + 1 > board_size - 1)))
		if (!is_a_piece_but_not_a_king(y - 1, x + 1))
				coordinate_board[y - 1][x + 1] = 'X';
}

void bishop_top_left(int y, int x)
{
	if ((y < 0) || (y > board_size - 1) || (x < 0) || (x > board_size - 1))
		return ;
	if (y - 1 < 0 || y - 1 > board_size - 1 || x - 1 < 0 || x - 1 > board_size - 1 || is_a_piece_but_not_a_king(y - 1, x - 1))
		return ;
	else
	{
		coordinate_board[y - 1][x - 1] = 'X';
		bishop_top_left(y - 1, x - 1);
	}
}

void bishop_top_right(int y, int x)
{
	if ((y < 0) || (y > board_size - 1) || (x < 0) || (x > board_size - 1))
		return ;
	if (y - 1 < 0 || y - 1 > board_size - 1 || x + 1 < 0 || x + 1 > board_size - 1 || is_a_piece_but_not_a_king(y - 1, x + 1))
		return ;
	else
	{
		coordinate_board[y - 1][x + 1] = 'X';
		bishop_top_right(y - 1, x + 1);
	}
}

void bishop_bottom_left(int y, int x)
{
	if ((y < 0) || (y > board_size - 1) || (x < 0) || (x > board_size - 1))
		return ;
	if (y + 1 < 0 || y + 1 > board_size - 1 || x - 1 < 0 || x - 1 > board_size - 1 || is_a_piece_but_not_a_king(y + 1, x - 1))
		return ;
	else
	{
		coordinate_board[y + 1][x - 1] = 'X';
		bishop_bottom_left(y + 1, x - 1);
	}
}

void bishop_bottom_right(int y, int x)
{
	if ((y < 0) || (y > board_size - 1) || (x < 0) || (x > board_size - 1))
		return ;
	if (y + 1 < 0 || y + 1 > board_size - 1 || x + 1 < 0 || x + 1 > board_size - 1 || is_a_piece_but_not_a_king(y + 1, x + 1))
		return ;
	else
	{
		coordinate_board[y + 1][x + 1] = 'X';
		bishop_bottom_right(y + 1, x + 1);
	}
}

void rook_left(int y, int x)
{
	if ((y < 0) || (y > board_size - 1) || (x < 0) || (x > board_size - 1))
		return ;
	if (y < 0 || y > board_size - 1 || x - 1 < 0 || x - 1 > board_size - 1 || is_a_piece_but_not_a_king(y, x - 1))
		return ;
	else
	{
		coordinate_board[y][x - 1] = 'X';
		rook_left(y, x - 1);
	}
}

void rook_up(int y, int x)
{
	if ((y < 0) || (y > board_size - 1) || (x < 0) || (x > board_size - 1))
		return ;
	if (y - 1 < 0 || y - 1 > board_size - 1 || x < 0 || x > board_size - 1 || is_a_piece_but_not_a_king(y - 1, x))
		return ;
	else
	{
		coordinate_board[y - 1][x] = 'X';
		rook_up(y - 1, x);
	}
}

void rook_right(int y, int x)
{
	if ((y < 0) || (y > board_size - 1) || (x < 0) || (x > board_size - 1))
		return ;
	if (y < 0 || y > board_size - 1 || x + 1 < 0 || x + 1 > board_size - 1 || is_a_piece_but_not_a_king(y, x + 1))
		return ;
	else
	{
		coordinate_board[y][x + 1] = 'X';
		rook_right(y, x + 1);
	}
}

void rook_down(int y, int x)
{
	if ((y < 0) || (y > board_size - 1) || (x < 0) || (x > board_size - 1))
		return ;
	if (y + 1 < 0 || y + 1 > board_size - 1 || x < 0 || x > board_size - 1 || is_a_piece_but_not_a_king(y + 1, x))
		return ;
	else
	{
		coordinate_board[y + 1][x] = 'X';
		rook_down(y + 1, x);
	}
}

void set_attack_zone(char piece, int y, int x)
{
	if (piece == 'P')
		pawn(y, x);
	if (piece == 'B')
	{
		bishop_top_left(y, x);
		bishop_top_right(y, x);
		bishop_bottom_left(y, x);
		bishop_bottom_right(y, x);
	}
	if (piece == 'R')
	{
		rook_left(y, x);
		rook_up(y, x);
		rook_right(y, x);
		rook_down(y, x);
	}
	if (piece == 'Q')
	{
		bishop_top_left(y, x);
		bishop_top_right(y, x);
		bishop_bottom_left(y, x);
		bishop_bottom_right(y, x);
		rook_left(y, x);
		rook_up(y, x);
		rook_right(y, x);
		rook_down(y, x);
	}
}

int main(int argc, char **argv)
{
	if (argc == 1)
	{
		ft_putchar('\n');
		return (0);
	}

	// Initializing the chessboard.
	char *str1 = argv[1];
	board_size = ft_strlen(str1);
	coordinate_board = (char **)malloc(sizeof(char *) * board_size + 1);
	coordinate_board[board_size] = 0;
	int i = 0;
	int j = 0;
	int k = 0;
	while (i < board_size)
	{
		j = 0;
		coordinate_board[i] = (char *)malloc(sizeof(char) * board_size + 1);
		while (j < board_size)
		{
			coordinate_board[i][j] = '.';
			j++;
		}
		coordinate_board[i][board_size] = 0;
		i++;
	}
	argv[board_size + 1] = 0;

	// Placing all chess pieces on an x, y chessboard.
	int king_location[2];
	char *pieces;
	i = 1;
	j = 0;
	k = 0;
	while (argv[i])
	{
		k = 0;
		pieces = argv[i];
		while (*pieces)
		{
			if (*pieces == 'P' || *pieces == 'B' || *pieces == 'R' || *pieces == 'Q' || *pieces == 'K')
			{
				if (*pieces == 'K')
				{
					king_location[0] = j;
					king_location[1] = k;
				}
				coordinate_board[j][k] = *pieces;
			}
			else
				coordinate_board[j][k] = '.';
			pieces++;
			k++;
		}
		j++;
		i++;
	}

	// Setting all viable attack zones for pieces other than the King.
	/*
	printf("BEFORE: ----------------------------\n");
	print_board(coordinate_board); // For testing purposes only.
	printf("AFTER: ----------------------------\n");
	*/
	i = 0;
	j = 0;
	while (coordinate_board[i])
	{
		j = 0;
		while (coordinate_board[i][j])
		{
			set_attack_zone(coordinate_board[i][j], i, j);
			j++;
		}
		i++;
	}
	//set_attack_zone('Q', 2, 3); // For testing purposes only.
	//print_board(coordinate_board); // For testing purposes only.
	if (coordinate_board[king_location[0]][king_location[1]] == 'K')
		ft_putstr("Fail\n");
	else if (coordinate_board[king_location[0]][king_location[1]] == 'X')
		ft_putstr("Success\n");
	return (0);
}
