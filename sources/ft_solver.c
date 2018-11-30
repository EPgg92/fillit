/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_solver.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: epoggio <epoggio@student.le-101.fr>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/11/20 14:30:06 by epoggio      #+#   ##    ##    #+#       */
/*   Updated: 2018/11/30 18:20:40 by epoggio     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../includes/fillit.h"

static int	ft_wipe_piece(t_output out, t_lst_coord lc, int l, int side)
{
	char	c;
	int		i;
	int		j;

	i = -1;
	c = lc[l].letter;
	while (++i < side && (j = -1) < 0)
		while (++j < side)
			if (out[i + lc[l].minos[0].x][j + lc[l].minos[0].y] == c)
			{
				out[i + lc[l].minos[0].x][j + lc[l].minos[0].y] = '.';
				out[i + lc[l].minos[1].x][j + lc[l].minos[1].y] = '.';
				out[i + lc[l].minos[2].x][j + lc[l].minos[2].y] = '.';
				out[i + lc[l].minos[3].x][j + lc[l].minos[3].y] = '.';
				return (1);
			}
	return (0);
}

static int	ft_place_piece(t_container c, int i, int j, int l)
{
	if (c.out[i + c.lc[l].minos[0].x][j + c.lc[l].minos[0].y] == '.'
		&& c.out[i + c.lc[l].minos[1].x][j + c.lc[l].minos[1].y] == '.'
		&& c.out[i + c.lc[l].minos[2].x][j + c.lc[l].minos[2].y] == '.'
		&& c.out[i + c.lc[l].minos[3].x][j + c.lc[l].minos[3].y] == '.')
	{
		c.out[i + c.lc[l].minos[0].x][j + c.lc[l].minos[0].y] = c.lc[l].letter;
		c.out[i + c.lc[l].minos[1].x][j + c.lc[l].minos[1].y] = c.lc[l].letter;
		c.out[i + c.lc[l].minos[2].x][j + c.lc[l].minos[2].y] = c.lc[l].letter;
		c.out[i + c.lc[l].minos[3].x][j + c.lc[l].minos[3].y] = c.lc[l].letter;
		l++;
		if (l == c.nb_tetri)
			ft_printer(c.out, c.side);
		i = -1;
		while (++i < c.side && (j = -1) < 0)
			while (++j < c.side)
			{
				if (ft_place_piece(c, i, j, l))
					return (1);
				ft_wipe_piece(c.out, c.lc, l, c.side);
			}
	}
	return (0);
}

static int	ft_place_first_piece(t_container c)
{
	int		i;
	int		j;

	i = -1;
	while (++i < c.side && (j = -1) < 0)
		while (++j < c.side)
			ft_place_piece(c, i, j, 0);
	return (0);
}

static int	ft_backtracking(t_container c)
{
	ft_re_init_output(c.out, c.side);
	if (ft_place_first_piece(c) == 0)
	{
		c.side++;
		ft_backtracking(c);
	}
	return (64);
}

int			ft_solver(t_container c)
{
	ft_init_output(c.out);
	c.side = ft_sqrt(4 * c.nb_tetri);
	ft_backtracking(c);
	return (0);
}
