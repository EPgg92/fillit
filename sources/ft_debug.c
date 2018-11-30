/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_debug.c                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: epoggio <epoggio@student.le-101.fr>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/11/20 14:20:50 by epoggio      #+#   ##    ##    #+#       */
/*   Updated: 2018/11/30 16:17:53 by epoggio     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../includes/fillit.h"


void	ft_writechar(char c)
{
	write(0, &c, 1);
}

void	ft_printtetri(t_tetri tetri, int nb_tetri)
{
	int i;
	int j;
	int k;

	i = -1;
	j = -1;
	k = -1;
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


void print_out(t_output out)
{
	int i;

	i = -1;
	while (++i < 16 && out[i][0])
		printf("%s\n", out[i]);
	printf("\n");
}



void	ft_printcoord(t_lst_coord lc, int nb_tetri)
{
	int i,j;

	i = -1;
	while (++i < nb_tetri)
	{
		j = -1;
		while (++j < 4)
			printf("piece %c point %d x: %d y: %d\n",
			 lc[i].letter, j, lc[i].minos[j].x, lc[i].minos[j].y);
		printf("\n");
	}
}
