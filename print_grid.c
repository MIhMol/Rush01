/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   print_grid.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: gloria <gloria@student.42.fr>                +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/08/01 23:43:17 by gloria        #+#    #+#                 */
/*   Updated: 2026/08/02 18:12:36 by chachan       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ptchar(char c)
{
	write(1, &c, 1);
}

void	print_grid(int matrix[4][4])
{
	int	row;
	int	col;

	row = 0;
	while (row < 4)
	{
		col = 0;
		while (col < 4)
		{
			ptchar(matrix[row][col] + '0');
			if (col < 3)
				ptchar(' ');
			col++;
		}
		ptchar('\n');
		row++;
	}
}
