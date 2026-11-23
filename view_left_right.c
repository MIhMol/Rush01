/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   view_left_right.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: chachan <chachan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/08/02 18:29:27 by chachan       #+#    #+#                 */
/*   Updated: 2026/08/02 20:17:46 by chachan       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		view_left_to_right(int grid[4][4], int *req);
int		view_right_to_left(int grid[4][4], int *req);

int	view_left_right(int grid[4][4], int *req)
{
	if ((view_left_to_right(grid, req) == 0)
		|| (view_right_to_left(grid, req) == 0))
		return (0);
	return (1);
}
