/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   view_right_to_left.c                               :+:    :+:            */
/*                                                     +:+                    */
/*   By: chachan <chachan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/08/02 19:16:12 by chachan       #+#    #+#                 */
/*   Updated: 2026/08/02 21:18:08 by chachan       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	view_right_to_left(int grid[4][4], int *req)
{
	int	row;
	int	col;
	int	unit_count;
	int	count;

	row = 0;
	while (row < 4)
	{
		unit_count = 0;
		col = 3;
		count = 0;
		while (col >= 0)
		{
			if (grid[row][col] > unit_count)
			{
				unit_count = grid[row][col];
				count++;
			}
			col--;
		}
		if (count != req[row + 12])
			return (0);
		row++;
	}
	return (1);
}
