#include "../includes/fillit.h"


void ft_writechar(char c)
{
	write(0, &c, 1);
}

void ft_printtetri(t_tetri tetri, int nb_tetri)
{
	int i = -1;
	int j = -1;
	int k = -1;
	while (++i < nb_tetri)
	{
		while (++j < NB_LINE)
		{
			while (++k < NB_COLL)
				ft_writechar(tetri[i][j][k]);
			k = -1;
			ft_writechar('\n');
		}
		j = -1;
		ft_writechar('-');
		ft_writechar('~');
		ft_writechar('-');
		ft_writechar('~');
		ft_writechar('\n');
	}
}

/*
** Just for debug...
*/
