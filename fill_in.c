/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   fill_in.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: gloria <gloria@student.42.fr>                +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/08/01 23:42:49 by gloria        #+#    #+#                 */
/*   Updated: 2026/08/02 20:13:17 by chachan       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	view_check(int grid[4][4], int *req);

int	check_duplicate(int grid[4][4], int row, int col, int num)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (grid[row][i] == num || grid[i][col] == num)
			return (0);
		i++;
	}
	return (1);
}

int	fill_in(int grid[4][4], int *req, int position)
{
	int	row;
	int	col;
	int	num;

	if (position == 16)
		return (view_check(grid, req));
	row = position / 4;
	col = position % 4;
	num = 1;
	while (num <= 4)
	{
		if (check_duplicate(grid, row, col, num))
		{
			grid[row][col] = num;
			if (fill_in(grid, req, position + 1))
				return (1);
			grid[row][col] = 0;
		}
		num++;
	}
	return (0);
}
