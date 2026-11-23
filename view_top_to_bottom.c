/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   view_top_to_bottom.c                               :+:    :+:            */
/*                                                     +:+                    */
/*   By: chachan <chachan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/08/02 19:42:04 by chachan       #+#    #+#                 */
/*   Updated: 2026/08/02 21:18:30 by chachan       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	view_top_to_bottom(int grid[4][4], int *req)
{
	int	row;
	int	col;
	int	unit_count;
	int	count;

	col = 0;
	while (col < 4)
	{
		row = 0;
		unit_count = 0;
		count = 0;
		while (row < 4)
		{
			if (grid[row][col] > unit_count)
			{
				unit_count = grid[row][col];
				count++;
			}
			row++;
		}
		if (count != req[col])
			return (0);
		col++;
	}
	return (1);
}
