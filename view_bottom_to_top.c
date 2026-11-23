/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   view_bottom_to_top.c                               :+:    :+:            */
/*                                                     +:+                    */
/*   By: chachan <chachan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/08/02 19:52:59 by chachan       #+#    #+#                 */
/*   Updated: 2026/08/02 21:17:20 by chachan       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	view_bottom_to_top(int grid[4][4], int *req)
{
	int	row;
	int	col;
	int	unit_count;
	int	count;

	col = 0;
	while (col < 4)
	{
		row = 3;
		unit_count = 0;
		count = 0;
		while (row >= 0)
		{
			if (grid[row][col] > unit_count)
			{
				unit_count = grid[row][col];
				count++;
			}
			row--;
		}
		if (count != req[col + 4])
			return (0);
		col++;
	}
	return (1);
}
