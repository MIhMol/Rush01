/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   view_top_bottom.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: chachan <chachan@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/08/02 18:20:02 by chachan       #+#    #+#                 */
/*   Updated: 2026/08/02 20:17:32 by chachan       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		view_bottom_to_top(int grid[4][4], int *req);
int		view_top_to_bottom(int grid[4][4], int *req);

int	view_top_bottom(int grid[4][4], int *req)
{
	if ((view_bottom_to_top(grid, req) == 0)
		|| (view_top_to_bottom(grid, req) == 0))
		return (0);
	return (1);
}
