#include "../includes/fillit.h"

int ft_transform(t_tetri tetri, int nb_tetri, t_lst_coord lc)
{
  int i;
  int j;
  int k;
  int l;

  i = -1;
  while (++i < nb_tetri && (j = -1) < 101 && (l = 0) < 42)
  {
    lc[i].letter = 'A' + i;
    while (++j < NB_LINE && (k = -1) < 0)
      while (++k < NB_COLL)
        if (tetri[i][j][k] != '.')
        {
          lc[i].minos[l].x = j;
          lc[i].minos[l++].y = k;
        }
  }
  return 0;
}
