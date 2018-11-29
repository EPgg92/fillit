/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_solver.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: epoggio <epoggio@student.le-101.fr>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/11/20 14:30:06 by epoggio      #+#   ##    ##    #+#       */
/*   Updated: 2018/11/30 00:34:43 by epoggio     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../includes/fillit.h"

int ft_wipe_piece(t_output out, t_lst_coord lc, int l, int side)
{
  char  c;
  int   i;
  int   j;

  i = -1;
  c = lc[l].letter;
  while (++i < side && (j = -1) < 0)
    while (++j < side)
      if (out[i][j] == c)
        out[i][j] = '.';
  return (0);
}

int ft_place_piece(t_output out, t_lst_coord lc, int side, int i, int j , int l, int nb_tetri)
{
	int x;
	int y;

	x = i;
	y = j;
	printf("%d %d %c\n", i, j, lc[l].letter );
	print_out(out);
	if (out[x + lc[l].minos[0].x][y + lc[l].minos[0].y] == '.'
		&& out[x + lc[l].minos[1].x][y + lc[l].minos[1].y] == '.'
		&& out[x + lc[l].minos[2].x][y + lc[l].minos[2].y] == '.'
		&& out[x + lc[l].minos[3].x][y + lc[l].minos[3].y] == '.')
	{
		out[x + lc[l].minos[0].x][y + lc[l].minos[0].y] = lc[l].letter;
		out[x + lc[l].minos[1].x][y + lc[l].minos[1].y] = lc[l].letter;
		out[x + lc[l].minos[2].x][y + lc[l].minos[2].y] = lc[l].letter;
		out[x + lc[l].minos[3].x][y + lc[l].minos[3].y] = lc[l].letter;
		l++;
		if (l == nb_tetri)
		{
			print_out(out);
			return (1);
		}
		if (ft_place_piece(out, lc, side, 0, 0, l, nb_tetri))
			return (1);
	}
	if (j + 1 <= side)
	{
		printf("J + 1\n" );
		ft_wipe_piece(out, lc, l, side);
		if(ft_place_piece(out, lc, side, i, j + 1, l, nb_tetri))
			return (1);
		return (0);
	}
	else if (i + 1 <= side)
	{
		printf("I + 1\n" );
		ft_wipe_piece(out, lc, l, side);
		if(ft_place_piece(out, lc, side, i + 1, 0, l, nb_tetri))
			return (1);
		return (0);
	}
	return (0);
}

static int ft_backtracking(int side, int nb_tetri, t_lst_coord lc, t_output out)
{
    int i;

    i = -1;
    ft_re_init_output(out, side);
    if (ft_place_piece(out, lc, side, 0, 0, 0, nb_tetri) == 1)
		return (0);
	//ft_backtracking(side + 1, nb_tetri, lc, out);
    return (64);
}

int ft_solver(int nb_tetri, t_lst_coord lc)
{
	int side;
	t_output out;
	ft_init_output(out);
	side = ft_sqrt(4 * nb_tetri);
	int lol = ft_backtracking(side, nb_tetri, lc, out);
	printf("0 is ok -> %d\n", lol );
	return (0);
}
