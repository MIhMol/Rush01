/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   view_left_to_right.c                               :+:    :+:            */
/*                                                     +:+                    */
/*   By: chachan <chachan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/08/02 19:14:58 by chachan       #+#    #+#                 */
/*   Updated: 2026/08/02 21:17:56 by chachan       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	view_left_to_right(int grid[4][4], int *req)
{
	int	row;
	int	col;
	int	unit_count;
	int	count;

	row = 0;
	while (row < 4)
	{
		unit_count = 0;
		col = 0;
		count = 0;
		while (col < 4)
		{
			if (grid[row][col] > unit_count)
			{
				unit_count = grid[row][col];
				count++;
			}
			col++;
		}
		if (count != req[row + 8])
			return (0);
		row++;
	}
	return (1);
}
