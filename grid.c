/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   grid.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelouarg <anas.elouargui@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/25 07:42:10 by aelouarg          #+#    #+#             */
/*   Updated: 2018/11/25 07:42:11 by aelouarg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tetris.h"

char	**create_grid(int dim)
{
	int		i;
	int		j;
	char	**grid;

	i = 0;
	j = 0;
	if (!(grid = (char**)malloc(sizeof(char*) * dim + 1)))
		return (NULL);
	while (i < dim)
	{
		if (!(grid[i] = (char*)malloc(sizeof(char) * (dim + 1))))
			return (NULL);
		j = 0;
		while (j < dim)
		{
			grid[i][j] = '.';
			j++;
		}
		grid[i][j] = '\0';
		i++;
	}
	grid[i] = NULL;
	return (grid);
}

void	remove_minos(char **grid, t_point *tetrisa)
{
	int		i;
	int		j;
	int		count;

	i = 0;
	count = 0;
	while (grid[i])
	{
		j = 0;
		while (grid[i][j])
		{
			if (grid[i][j] == (tetrisa[0].index + 65))
			{
				grid[i][j] = '.';
				count++;
			}
			j++;
			if (count == 4)
				return ;
		}
		i++;
	}
}

void	print_grid(char **grid)
{
	int		i;

	i = 0;
	while (grid[i])
	{
		ft_putstr(grid[i]);
		ft_putstr("\n");
		i++;
	}
}

void	free_grid(char **grid, int dim)
{
	int		i;

	i = 0;
	while (i < dim)
	{
		free(grid[i]);
		i++;
	}
	free(grid);
	grid = NULL;
}

int		sqrt_sup(int n)
{
	int		i;

	i = 0;
	while ((i * i) < n)
		i++;
	return (i);
}
