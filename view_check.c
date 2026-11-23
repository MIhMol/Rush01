/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   view_check.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: chachan <chachan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/08/02 18:14:26 by chachan       #+#    #+#                 */
/*   Updated: 2026/08/02 20:17:16 by chachan       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		view_top_bottom(int grid[4][4], int *req);
int		view_left_right(int grid[4][4], int *req);

int	view_check(int grid[4][4], int *req)
{
	if (view_top_bottom(grid, req) == 0 || view_left_right(grid, req) == 0)
		return (0);
	return (1);
}
