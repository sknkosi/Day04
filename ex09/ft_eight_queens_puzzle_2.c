/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_eight_queens_puzzle_2.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sknkosi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/24 10:49:25 by sknkosi           #+#    #+#             */
/*   Updated: 2020/06/24 10:49:31 by sknkosi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#define ABS(a, b)	((a >= b) ? (a - b) : (b - a))

int	ft_putchar(char c);

static void	solve_queens_puzzle(int queens, int col, int *board)
{
	int		i;
	int		j;

	if (col == queens)
	{
		i = -1;
		while (++i < queens)
		{
			j = 0;
			while (j < queens)
				(j++ == board[i]) ? ft_putchar(j + '0') : 0;
		}
		ft_putchar('\n');
	}
	i = 0;
	while (i < queens)
	{
		j = 0;
		while (j < col && !(board[j] == i || ABS(board[j], i) == col - j))
			j += 1;
		if (j < col && i++ < queens)
			continue ;
		board[col] = i++;
		solve(queens, col + 1, board);
	}
}

void		ft_eight_queens_puzzle_2(void)
{
	int		board[8];
	int		queens;
	int		pos;

	queens = 8;
	pos = 0;
	solve_queens_puzzle(queens, pos, board);
}
