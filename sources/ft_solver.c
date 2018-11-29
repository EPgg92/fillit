/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_solver.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: epoggio <epoggio@student.le-101.fr>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/11/20 14:30:06 by epoggio      #+#   ##    ##    #+#       */
/*   Updated: 2018/11/28 17:52:44 by epoggio     ###    #+. /#+    ###.fr     */
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

// ou alors : (a modif)
// c = lc[l].letter;
// while (i < side)
//   while (j < side)
//     if (out[i][j] == c)
//       {
//         out[i + lc[l].minos[0].x][j + lc[l].minos[0].y] = '.';
//         out[i + lc[l].minos[1].x][j + lc[l].minos[1].y] = '.';
//         out[i + lc[l].minos[2].x][j + lc[l].minos[2].y] = '.';
//         out[i + lc[l].minos[3].x][j + lc[l].minos[3].y] = '.';
//         return (1);
//       }
  return (0);
}

int ft_change_place_x(t_output out, t_lst_coord lc, int side, int i, int j, int l)
{
  ft_wipe_piece(out, lc, l, side);
  ft_place_piece(out, lc, side, i + 1, j, l);
  return (0);
}

int ft_change_place_y(t_output out, t_lst_coord lc, int side, int i, int j, int l)
{
  ft_wipe_piece(out, lc, l, side);
  ft_place_piece(out, lc, side, i, j + 1, l);
  return (0);
}

int ft_place_piece(t_output out, t_lst_coord lc, int side, int i, int j , int l)
{
  while (++i < side)
    while (++j < side)
      if (out[i + lc[l].minos[0].x][j + lc[l].minos[0].y] == '.'
        && out[i + lc[l].minos[1].x][j + lc[l].minos[1].y] == '.'
        && out[i + lc[l].minos[2].x][j + lc[l].minos[2].y] == '.'
        && out[i + lc[l].minos[3].x][j + lc[l].minos[3].y] == '.')
        {
          out[i + lc[l].minos[0].x][j + lc[l].minos[0].y] = lc[l].letter;
          out[i + lc[l].minos[1].x][j + lc[l].minos[1].y] = lc[l].letter;
          out[i + lc[l].minos[2].x][j + lc[l].minos[2].y] = lc[l].letter;
          out[i + lc[l].minos[3].x][j + lc[l].minos[3].y] = lc[l].letter;
          return (1);
        }
  if ((ft_change_place_y(out, lc, side, i, j, l - 1)) && l != 0)
    return (1);
  if ((ft_change_place_x(out, lc, side, i, j, l - 1)) && l != 0)
    return (1);
  return (0);
}

static int ft_backtracking(int side, int nb_tetri, t_lst_coord lc, t_output out)
{
    int i;

    i = -1;
    ft_re_init_output(out, side);
    while (++i < nb_tetri)
      if(ft_place_piece(out, lc, side, 0, 0, i) == 0)
        ft_backtracking(side + 1, nb_tetri, lc, out);
    return (0);
}

int ft_solver(int nb_tetri, t_lst_coord lc)
{
  int side;
  t_output out;



  ft_init_output(out);

  side = ft_sqrt(4 * nb_tetri);
  ft_backtracking(side, nb_tetri, lc, out);


  int i;

  i = -1;
  while (++i < 16 && out[i][0])
    printf("- %s\n", out[i]);
  return 0;
}
