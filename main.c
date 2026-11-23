/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: gloria <gloria@student.42.fr>                +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/08/01 23:43:06 by gloria        #+#    #+#                 */
/*   Updated: 2026/08/02 21:15:41 by chachan       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ptchar(char c);
void	print_grid(int matrix[4][4]);
int		view_check(int grid[4][4], int *req);
int		fill_in(int grid[4][4], int *req, int position);
int		check_duplicate(int grid[4][4], int row, int col, int num);

int	check_input(char *str, int *req)
{
	int	i;

	i = 0;
	while (*str)
	{
		if (*str >= '1' && *str <= '4')
		{
			if (i >= 16)
				return (0);
			req[i] = *str - '0';
			i++;
		}
		else if (*str != ' ')
			return (0);
		str++;
	}
	return (i == 16);
}

void	init_grid(int grid[4][4])
{
	int	r;
	int	c;

	r = 0;
	while (r < 4)
	{
		c = 0;
		while (c < 4)
		{
			grid[r][c] = 0;
			c++;
		}
		r++;
	}
}

int	main(int argc, char **argv)
{
	int	grid[4][4];
	int	req[16];

	init_grid(grid);
	if (argc != 2 || !check_input(argv[1], req))
	{
		write(1, "Error", 5);
		write(1, "\n", 1);
		return (0);
	}
	if (fill_in(grid, req, 0))
		print_grid(grid);
	else
	{
		write(1, "Error", 5);
		write(1, "\n", 1);
	}
	return (0);
}
